#include "Node.hpp"

#ifndef LINKEDLIST_HPP
#define LINKEDLIST_HPP

class LinkedList
{
	private:
		Node *head;
		Node *tail;
		int size;
	
	public:
      LinkedList();
      Node* getHead();
      Node* getTail();
      int getSize();
      void addNodeToFront(int val);
      void addNodeToEnd(int val);
      void addNodeToGivenPos(int val, int pos);
      void removeNodeFromFront();
      void removeNodeFromEnd();
      void removeNodeFromGivenPos(int pos);
      void reverse();
      LinkedList* merge(LinkedList* list1, LinkedList* list2);
      LinkedList* mergeAndSort(LinkedList* list1, LinkedList* list2);
      void iterate();
};

#endif