// Binary Search Andriy Bench 2022


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int BinarySearch(vector<int> list, int item)
{
   int low, guess, mid;
   low = guess = mid = 0;
   int high = list.size() - 1;

   while(low <= high)
   {
   	mid = (low + high) / 2;
	guess = list[mid];
	
	cout << mid << ", " << guess << endl;

	if(guess == item)
	{
	   return mid;
	}
	if(guess > item)
	{
           high = mid - 1;
	}
	else
	{
	   low = mid + 1;
	}
   }
   return -1;
}

int main()
{
   vector<int> list;
   int x,num = 0;
   int maxsize = 10;
   string q;

   cout << "Please enter values into a vector, type STOP to stop." << endl;

   while(cin >> num)
   {
      if(list.size()<maxsize)
      {
        if(!cin.fail())
	{
	   list.push_back(num);
	}
	else
	{
	cout << "Enter an intiger" << endl;
	}
      }
      else
      { 
	cout << endl;
      	cout << "Stop? Y/N" << endl;
	cin >> q;
	if(q=="Y" || q == "y")
	{
	   break;
	}
	else
	{
	   maxsize+=10;
	}
      }
    
   }

   sort(list.begin(), list.end());

   for(int i = 0; i<list.size(); ++i)
   {
	   cout << list[i] << " ";
   }

   cout << endl;

   cout << "which value are you trying to find from the list: " << endl;
   cin >> x;

   cout << BinarySearch(list,x) << endl;

   return 0;
}
