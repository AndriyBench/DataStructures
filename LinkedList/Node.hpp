#include <iostream>

#ifndef NODE_HPP
#define NODE_HPP

class Node
{
   public:
      Node();
      Node(int x, Node* n);
      Node(Node* n);
      Node(int x);
      int value;
      Node *next;
     
};  

#endif