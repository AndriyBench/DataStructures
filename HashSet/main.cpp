#include "HashSet.hpp"
#include <iostream> 

using namespace std;

int main()
{
   HashSet *hset = new HashSet(50);
   
   hset->addVal(1);
   hset->addVal(51);
   hset->addVal(12312);
   hset->addVal(545345);
   hset->addVal(12341);
   hset->addVal(655436);
   cout << endl;
   hset->print();
   cout << endl;
   hset->containsVal(51);
   hset->deleteVal(655436);
   cout << endl;
   hset->print();
  
   return 1;
}