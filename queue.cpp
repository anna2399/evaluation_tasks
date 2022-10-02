#include <iostream>

struct ListNode
{
  int nodedata;
  ListNode *next;
};

class Queue
{
  ListNode *head;
  ListNode *tail;

public:
  Queue()
  {
    head = NULL;
    tail = NULL;
  }
  bool isEmpty()
  {
    if (head == NULL)
      return true;
    else
      return false;
  }
  void Enqueu(int item)
  {
    ListNode *newNode;
    newNode = new ListNode;
    newNode->nodedata = item;
    newNode->next = NULL;

    if (isEmpty())
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
  }

  void Dequeue()
  {
    if (isEmpty())
    {
      std::cout << "The queue has no elements";
    }
    else
    {
      ListNode *tempNode;
      tempNode = head;
      head = tempNode->next;
      delete tempNode;
    }
  }

  void Print()
  {
    ListNode *nodeForPrinting;
    nodeForPrinting = head;
    while (nodeForPrinting != NULL)
    {
      std::cout << nodeForPrinting->nodedata << std::endl;
      nodeForPrinting = nodeForPrinting->next;
    }
  }
};

int main()
{
  Queue queue;
  queue.Enqueu(1);
  queue.Enqueu(2);
  queue.Enqueu(3);
  queue.Enqueu(4);
  queue.Print();
  queue.Dequeue();
  queue.Dequeue();
  std::cout << "Queue after deleting elements" << std::endl;
  queue.Print();
}
