#include <vector>


#ifndef HASHSET_HPP
#define HASHSET_HPP

class HashSet
{
    private:
      int size;
      std::vector<std::vector<int>> array;
      int hashFunction(int val);
      
    public:
      //constructor
      HashSet(int size);
      
      //functions
      void addVal(int val);
      void deleteVal(int val);
      bool containsVal(int val);
      void print(void);
};

#endif