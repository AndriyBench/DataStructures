#include "LinkedList.hpp"

LinkedList::LinkedList() :
head(), tail(), size(0)
{
	//do something
}

//implement member functions
Node* LinkedList::getHead()
{
      std::cout << head << std::endl;
      return head;
}
Node* LinkedList::getTail()
{
   std::cout << tail << std::endl;
   return tail;
}
int LinkedList::getSize()
{
   std::cout << size << std::endl;
   return size;
}
      
void LinkedList::addNodeToFront(int val)
{
   Node *node = new Node();
   node->value = val;
   
   if( head == NULL)
   {
      head = tail = node;
      size++;
   }
   else
   {
      node->next = head;
      head = node;
      size++;
   }

}
void LinkedList::addNodeToEnd(int val)
{
   Node *node = new Node();
   node->value = val;
   
   if( head == NULL)
   {
      head = tail = node;
      size++;
   }
   else
   {
      tail->next = node;
      tail = node;
      size++;
   }
}
void LinkedList::addNodeToGivenPos(int val, int pos)
{
   Node *tmp = new Node();
   tmp->value = val;
   
   if(head == NULL)
   {
      std::cout << "List is empty" << std::endl;
   }
   else if(pos == 0)
   {
      addNodeToFront(val);
   }
   else
   {
      Node *ptr = head;
      while(pos > 1)
      {
         ptr = ptr->next;
         pos--;
      }
      if(ptr->next == tail)
      {
         addNodeToEnd(val);
      }
      tmp->next = ptr->next;
      ptr->next = tmp;
      size++;
   }
}
void LinkedList::removeNodeFromFront()
{
   Node *tmp = new Node();
   
   if(head == NULL)
   {
      std::cout << "List is empty, fool" << std::endl; 
   }
   else if (head == tail) 
   {
      head = tail = NULL;
   }
   else
   {
      tmp = head;
      head = head->next;
      size--;
      delete(tmp);
   }
   
}
void LinkedList::removeNodeFromEnd()
{
   Node *tmp = new Node();
   
   if(head == NULL)
   {
      std::cout << "List is empty, fool" << std::endl; 
   }
   else if (head == tail) 
   {
      head = tail = NULL;
   }
   else
   {
      tmp = head;
      
      while(tmp->next != tail)
      {
         tmp = tmp->next;
      }
      
      tmp->next = NULL;
      tail = tmp;
      size--;
   }
}
void LinkedList::removeNodeFromGivenPos(int pos)
{
   Node *tmp, *ptr;
   
   if(head == NULL)
   {
      std::cout << "List is empty" << std::endl;
   }
   else if(pos == 0)
   {
      removeNodeFromFront();
   }
   else
   {
      tmp = ptr = head;
      while(pos > 0)
      {
         pos--;
         tmp = ptr;
         ptr = ptr->next;
      }
      if(ptr->next == tail)
      {
         removeNodeFromEnd();
      }
      tmp->next = ptr->next;
      size--;
      delete(ptr);
   }
}
void LinkedList::reverse()
{
   Node *current;
   Node *next;
   Node *previous;
   
   current = next = tail = head;
   previous = NULL;
   
   while( current != NULL )
   {
      next = current->next;
      current->next = previous;
      previous = current;
      current = next;
   }
   head = previous;
}
LinkedList* LinkedList::merge(LinkedList* list1, LinkedList* list2)
{
   return list1;
}
LinkedList* LinkedList::mergeAndSort(LinkedList* list1, LinkedList* list2)
{
   return list1;
}

void LinkedList::iterate()
{
   Node *current;
   
   current = head;
   
   while(current != NULL)
   {
      std::cout << "[" << current->value << "] " ;
		current = current->next;
   }
   std::cout << std::endl;
}