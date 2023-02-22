//searching the number
#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for( int i=0; i<5; i++)
	{
		cout<<" Enter the value"<<i+1<<":";
		cin>>arr[i];
	}
	int num;
	cout<<"enter the searching number :";
	cin>>num;
	bool flag;
	for ( int i=0; i<5;i++)
	{ 
	if( num==arr[i])
	flag++;
	}
	cout<<" the values are :";
	for ( int i=0; i<5; i++)
	{
		cout<<arr[i]<<"\t"<<endl;	
	}
	cout<<endl;
	if(flag==1)
	{
		cout<<"number found";
	}
	else
	cout<<" number not found";
}
