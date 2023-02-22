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
	
	// the maximum value of array are:
	int max=arr[0];
for( int i=1; i<10; i++)
{
	if(max<arr[i])
	max=arr[i];
}
	cout<<"The maximun value of Array are :"<<max<<endl;
}
