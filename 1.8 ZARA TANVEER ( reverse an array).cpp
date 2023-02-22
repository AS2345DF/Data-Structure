#include <iostream>
using namespace std;
int main()
{
	int arr[5],i;
	cout<<" Enter array elements  : ";
	for(int i=0; i<5; i++)
		cin>>arr[i];
		cout<<"\nReal array is : "<<endl;
	for(int i=0; i<5; i++)
		cout<<arr[i]<<" ";
		cout<<" \n\n Reversed array are : "<<endl;
		for(i=(5-1); i>=0; i--)
			cout<<arr[i]<<" "<<endl;
		}
			
	

