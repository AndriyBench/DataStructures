#include "HashSet.hpp"
#include <iostream>
#include <algorithm>

HashSet::HashSet(int size) :
size(size), array(size, std::vector<int>{})
{
  // do something
}

int HashSet::hashFunction(int val)
{
   int pos = val % size;
   return pos;
}

void HashSet::addVal(int val)
{
   int index = hashFunction(val);
   if(std::find(array[index].begin(), array[index].end(), val) == array[index].end())
   {
      std::cout << "Adding: " << val << std::endl;
      array[index].push_back(val);
   }
   else
   {
      std::cout << "value already in list" << std::endl;
   }
}

void HashSet::deleteVal(int val)
{
   int index = hashFunction(val);
   auto it = std::find(array[index].begin(), array[index].end(), val);
   if( it != array[index].end())
   {
      std::cout << "Deleting:" << val << std::endl;
      array[index].erase(it);
   }
   else
   {
      std::cout << "value not in list" << std::endl;
   }
}

bool HashSet::containsVal(int val)
{
   int index = hashFunction(val);
   if(std::find(array[index].begin(), array[index].end(), val) != array[index].end())
   {
      std::cout << "Found: " << val << std::endl;
      return true;
   }
   else
   {
      std::cout << "Not Found:" << val << std::endl;
      return false;
   }
}

void HashSet::print(void)
{
   for(int i = 0; i < array.size(); i++)
   {  
      for(int j = 0; j < array[i].size(); j++)
      {
         std::cout << "index: (" << i << ", " << j << "),  value: " << array[i][j] << std::endl;
      }
   }
   
}