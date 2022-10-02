//Random small recursive functions Andriy Bench 2022

#include <iostream>
#include <vector>
using namespace std;

void countdown(int x)
{
  cout << x << endl;

  //base case
  if(x <=0)
  {
    return;	 
  }

  //recursive step
  countdown(x-1);
}

int factorial(int x)
{
  //base case
  if(x == 1)
  {
    return 1;
  }

  //recursive step
  return x*factorial(x-1);
}

int sum(vector<int> list)
{
   //base case
   if(list.size()==0)
   {
      return 0;
   }

   //recursive step
   int result = list.back();
   list.pop_back();
   return result+= sum(list);
}

int maxInt(vector<int> list)
{
   int max;
   int tmp;
   //base case
   if(list.size() == 0)
   {
     throw invalid_argument("Cannot select max from empty value");
   }

   if(list.size() == 1)
   {
     return list.at(0);
   }

   //recursive step
   max = list.back();
   list.pop_back();
   tmp = maxInt(list);
   
   if(max > tmp)
   {
     return max;
   }
   else
   {
     return tmp;
   }	

}


int BinarySearchRecursive(vector<int> list, int num, int low, int high)
{
  //base case
  if(low > high)
  {
    return -1;
  }

  //recursive step

  int mid = (low + high) / 2;

  if(num == list[mid])
  {
    return mid;
  }
  else if(num > mid)
  {
    return BinarySearchRecursive(list, num, mid+1, high);
  }
  else
  {
    return BinarySearchRecursive(list, num, low, mid-1);
  }
 

}

int partition(vector<int> &values, int left, int right) {
    int pivotIndex = left + (right - left) / 2;
    int pivotValue = values[pivotIndex];
    int i = left, j = right;
    int temp;
    while(i <= j) {
        while(values[i] < pivotValue) {
            i++;
        }
        while(values[j] > pivotValue) {
            j--;
        }
        if(i <= j) {
            temp = values[i];
            values[i] = values[j];
            values[j] = temp;
            i++;
            j--;
        }
    }
    return i;
}

void quickSort(vector<int> &values, int left, int right) {
    if(left < right) {
        int pivotIndex = partition(values, left, right);
        quickSort(values, left, pivotIndex - 1);
        quickSort(values, pivotIndex, right);
    }
}

int main()
{
	countdown(5);
	cout << factorial(5) << endl;
	vector<int> list {2,4,6,7,1,2};
        cout << sum(list) << endl;
	cout << maxInt(list) << endl;
	cout << BinarySearchRecursive(list, 7, 0, list.size()) << endl;
	quickSort(list, 0, list.size()-1);
	for(int x = 0; x<list.size(); x++)
	{
	  cout << list[x] << " ";
	}
	cout << endl;
	return 0;
}
