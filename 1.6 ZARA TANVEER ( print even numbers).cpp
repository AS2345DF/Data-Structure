#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for (int i=0; i<5; i++)
	{
		cout<<"Enter the value of array "<<i+1<<" : ";
		cin>>arr[i];
	}
	cout<<"The values of array are   :"<<endl;
	for(int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t"<<endl;
	}
	// print only even numbers in an array
	cout<<"Print even numbers in the array : "<<endl;
	for( int i=0; i<5; i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<endl;
		}
	}
	return 0;
}
	
