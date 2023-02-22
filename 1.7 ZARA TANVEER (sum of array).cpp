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
    // sum of an array
    int sum=0;
    for( int i=0; i<5; i++)
    {
    	sum=sum+arr[i];
	}
	cout<<"The sum of array are : "<<sum;
}
