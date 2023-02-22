#include<iostream>
using namespace std;
int main()
{
	int  arr[5];
		for(int i=0; i<5; i++)
		{
			cout<<"Enter the values of number "<<i+1<<": ";
			cin>>arr[i];
		}
	
	for( int i=5; i<5; i++)
	{
		cout<<arr[i]<<"\t";
	}
	int number;
	cout<<"Enter the number that how many times comes in list is : ";
	cin>>number;
	int count =0;
	for (int i=0; i<5; i++)
	{
		if( number==arr[i])
		{
			count++;
		}
	}
	cout<<"The number comes in list is : "<<count<<"times";
}
