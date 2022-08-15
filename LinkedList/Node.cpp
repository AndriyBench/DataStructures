#include "Node.hpp"

Node::Node()
{
   value = 0;
   next = NULL;
}

Node::Node(int x, Node* n)
{
   value = x;
   next = n;
}

Node::Node(Node* n)
{
   value = 0;
   next = n;
}

Node::Node(int x)
{
   value = x;
   next = NULL;
}

