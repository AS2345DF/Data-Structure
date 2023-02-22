//write a program to count odd and even integers in an array
#include<iostream>
using namespace std;
int main()
{
   int arr[10], eve=0, odd=0, i;
	for(int i=0; i<10; i++)
	{
		cout<<" Enter the values of array "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"The values of Array are :"<<endl;
	for(int i=0; i<10; i++)
	{
		cout<<arr[i]<<"\t"<<endl;
	}
   for(i=0; i<10; i++)
   {
      if(arr[i]%2==0)
         eve++;
      else
         odd++;
   }
    cout<<"\nTotal Number of Even Numbers = "<<eve;
   cout<<"\nTotal Number of Odd Numbers = "<<odd;
   cout<<endl;
   return 0;
}
