//find maximum difference between two elements in an array
#include<iostream>
using namespace std;
 int maxAbsDiff(int arr[], int n)
{ 
      sort(arr,arr+n); 
      return arr[n-1]-arr[0];
}
int main()
{
    int arr[] = { 2, 1, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxAbsDiff(arr, n);
     return 0;
}
