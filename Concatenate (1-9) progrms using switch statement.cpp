#include <iostream>
using namespace std;
int main()
{
	int variable;
	cout<<"press1 to show minimum number : "<<endl;
	cout<<"press2 to show maximum number :  "<<endl;
	cout<<"press3 to show searching number : "<<endl;
	cout<<"press4 to show how many times numbers comes in a list : "<<endl;
	cout<<"press5 to show odd numbers in an array : "	<<endl;
	cout<<"press6 to show even numbers in an array : "<<endl;
	cout<<"press7 to find sum of array : "<<endl;
	cout<<"press8 to show reverse an array : "<<endl;
	cout<<"press9 to show unique elements in an array :"<<endl;
	cin>>variable;
	switch(variable) 
	{
		case 1:
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
break;
	case 2:
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
break;
case 3:
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
break;
case 4:
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
	break;
	case 5:
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
	//  Print odd numbers in an array
	cout<<"Print only odd numbers from an array :"<<endl;
	for( int i=0; i<5; i++)
	{
		if(arr[i]%2!=0)
		{
			cout<<arr[i]<<"\t"<<endl;
		}
	}
		}
		break;
		case 6:
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
			}
			break;
			case 7:
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
break;
case 8:
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
		break;
		case 9:
		{
			
    int array[100], temp[100];
    int n, i, j, cnt;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "\nEnter elements in array: ";

    for (i = 0; i < n; i++)
	 {
	  cin >> array[i];
        temp[i] = -1;
    }

    // Finding frequency of each element

    for (i = 0; i < n; i++) {
        cnt = 1;
           for (j = i + 1; j < n; j++) {

            if (array[i] == array[j]) {
                cnt++;
                temp[j] = 0;
            }
        }

        if (temp[i] != 0) {
            temp[i] = cnt;
        }
    }
      // Printing all unique elements of the array
    cout << "\nUnique elements present in the array are: ";
    for (i = 0; i < n; i++) {
        if (temp[i] == 1) {
            cout << array[i] << ",  ";
        }
    }

			}	
			break;
			case 10:
				{
					cout<<"invalid input"<<endl;			
						}
					
	}
}

		
    
    

