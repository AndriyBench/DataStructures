#include "LinkedList.hpp"
#include "Node.hpp"

int main()
{
   LinkedList *list = new LinkedList();
   
   std::cout << "Hello new Linked List has been made" << std::endl;
   list->getHead();
   list->getTail();
   list->getSize();
   
   std::cout << "I am now making a new node to add to the front of the list" << std::endl;
   
   list->addNodeToFront(1);
   list->getHead();
   list->getTail();
   list->getSize();
   
   list->addNodeToFront(2);
   list->addNodeToFront(3);
   list->addNodeToFront(4);
   list->addNodeToFront(5);
   list->addNodeToEnd(6);
   list->addNodeToEnd(7);
   list->addNodeToEnd(8);
   list->removeNodeFromFront();
   list->removeNodeFromEnd();  
   
   list->addNodeToGivenPos(36, 3);
   list->getSize();
   list->iterate();
   
   list->addNodeToGivenPos(36, 0);
   list->getSize();
   list->iterate();

   list->addNodeToGivenPos(36, 8);
   list->getSize();
   list->iterate();

   list->removeNodeFromGivenPos(4);
   list->getSize();
   list->iterate();
   list->removeNodeFromGivenPos(0);
   list->getSize();
   list->iterate();

   list->removeNodeFromGivenPos(6);
   list->getSize();
   list->iterate();
   return 1;
   
}