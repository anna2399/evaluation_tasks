#include <iostream>
using namespace std;

struct ListNode
{
    int data;
    ListNode *next;
};

class Stack
{
    ListNode *haed;
    ListNode *tail;

public:
    Stack()
    {
        haed = NULL;
        tail = NULL;
    }
    bool isEmpty()
    {
        if (haed == NULL)
            return true;
        else
            return false;
    }
    void push(int item)
    {
        ListNode *newNode;
        newNode = new ListNode;
        newNode->next = haed;
        newNode->data = item;
        haed = newNode;
    }
    void pop()
    {
        if (isEmpty())
        {
            std::cout << "The stack is empty" << std::endl;
        }
        ListNode *tempNode;
        tempNode = haed;
        haed = tempNode->next;
        delete tempNode;
    }

    void peekTop()
    {
        if (isEmpty())
        {
            std::cout << "Can not peek top element, the stack is empty";
            std::cout << endl;
        }
        else
        {
            std::cout << "Top is " << haed->data;
            std::cout << endl;
        }
    }
    void Print()
    {
        if (isEmpty())
        {
            std::cout << "Stack has no element";
        }
        ListNode *tempNode;
        tempNode = haed;
        while (tempNode != NULL)
        {
            std::cout << tempNode->data << std::endl;
            tempNode = tempNode->next;
        }
    }
};

int main()
{
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.peekTop();
    std::cout << endl;
    stack.Print();
    stack.pop();
    stack.pop();
    std::cout << endl;
    stack.Print();
    std::cout << endl;
    stack.peekTop();
}
