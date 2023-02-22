#include<iostream>
using namespace std;
int main()
{
int arr[10];
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
	cout<<"Print only even numbers from an array :"<<endl;
	for( int i=0; i<10; i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<endl;
		}
	}
	cout<<"Print only odd numbers from an array :"<<endl;
	for( int i=0; i<10; i++)
	{
		if(arr[i]%2!=0)
		{
			cout<<arr[i]<<"\t"<<endl;
		}
	}
}
