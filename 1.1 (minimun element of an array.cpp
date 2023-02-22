//find mimimum value of an array
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
	int min=arr[0];
for( int i=1; i<10; i++)
{
	if(min>arr[i])
	min=arr[i];
}
	cout<<"The minimun value of Array are :"<<min<<endl;
}

