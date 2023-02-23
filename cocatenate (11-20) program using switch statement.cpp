#include<iostream>
using namespace std;
int main()
{
	int variable;
	cout<<"press1 to show seperate odd and even integer in seperate arrays : "<<endl;
	cout<<"press2 to show odd and even integers in an array :"<<endl;
	cout<<"press3 to show sort elements of array in ascending order : "<<endl;
	cout<<"press4 to show sort elements of array in descending order : "<<endl;
	cout<<"press5 to show 2nd smallest element in an array : "<<endl;
	cout<<"press6 to show 2nd largest element in an array : "<<endl;
	cout<<"press7 to show two arrays are same or not : "<<endl;
	cout<<"press8 to show merge two unsorted arrays of different lengths : "<<endl;
	cout<<"press9 to show maximum difference between two elements in an array : "<<endl;
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
	break;
	case 2:
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
		break;
		case 3:
			{
		#define MAX 100
			int arr[MAX];
	int n,i,j;
	int temp;
	
	//read total number of elements to read
	cout<<"Enter total number of elements to read: ";
	cin>>n;
	
	//check bound
	if(n<0 || n>MAX)
	{
		cout<<"Input valid range!!!"<<endl;
		return -1;
	}
	
	//read n elements
	for(i=0;i<n;i++)
	{
		cout<<"Enter element ["<<i+1<<"] ";
		cin>>arr[i];
	}
	
	//print input elements
	cout<<"Unsorted Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	
	//sorting - ASCENDING ORDER
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	//print sorted array elements
	cout<<"Sorted (Ascending Order) Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
	
	
	return 0;
			}
			break;
			case 4:
				{
					#define MAX 100
					int arr[MAX];
	int n,i,j;
	int temp;
	
	//read total number of elements to read
	cout<<"Enter total number of elements to read: ";
	cin>>n;
	
	//check bound
	if(n<0 || n>MAX)
	{
		cout<<"Input valid range!!!"<<endl;
		return -1;
	}
	
	//read n elements
	for(i=0;i<n;i++)
	{
		cout<<"Enter element ["<<i+1<<"] ";
		cin>>arr[i];
	}
	
	//print input elements
	cout<<"Unsorted Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;
	
	//sorting - Descending ORDER
	for(i=0;i<n;i++)
	{		
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	//print sorted array elements
	cout<<"Sorted (Descending Order) Array elements:"<<endl;
	for(i=0;i<n;i++)
		cout<<arr[i]<<"\t";
	cout<<endl;	
		
				}
				break;
				case 5:
					{
				
			int secSmallest(int arr[], int n)
{
   // assigning first element as smallest temporarily
   int smallest = arr[0];

   // we find the smallest element here
   for (int i=0; i < n; i++)
   {
     if(arr[i] < smallest)
       smallest = arr[i];
   }

   // temporarily assinging largest max value
   int sec_smallest = INT_MAX;

   // finding second smallest here
   for (int i=0; i < n; i++){
      if(arr[i] != smallest && arr[i] < sec_smallest)
        sec_smallest = arr[i];
   }

   return sec_smallest;

}
{
    int arr[] = {70, 40, 30, 20, 10, 90};

    int n = sizeof(arr)/sizeof(arr[0]); 

    cout<<secSmallest(arr, n);
}
					}
				
					
					break;
					case 6:
						{
							 int n, num[10], largest, second;
   cout<<"Enter number of elements: ";
   cin>>n;
   for(int i=0; i<n; i++){
      cout<<"Enter Array Element"<<(i+1)<<": ";
      cin>>num[i];
   }
  
   if(num[0]<num[1]){ 
      largest = num[1];
      second = num[0];
   }
   else{ 
      largest = num[0];
      second = num[1];
   }
   for (int i = 2; i< n ; i ++) {
      
      if (num[i] > largest) {
         second = largest;
         largest = num[i];
      }
      
      else if (num[i] > second && num[i] != largest) {
         second = num[i];
      }
   }
   cout<<"Second Largest Element in array is: "<<second;
   return 0;
						}
					}
						break;
						case 7:
							{
								bool isArrEqual(int A[], int B[], int lenA, int lenB) 
{ 
    if (lenA != lenB) 
        return false; 
  
    sort(A, A + lenA); 
    sort(B, B + lenB); 
    for (int i = 0; i < lenA; i++) 
        if (A[i] != B[i]) 
            return false; 
    return true; 
}
 
  
// Main function
 
int main() 
{
  int A[] = {1, 3, 2, 5, 4};
  int B[] = {2, 4, 5, 1, 3};
    int lenA = sizeof(A) / sizeof(int); 
    int lenB = sizeof(B) / sizeof(int); 
  
  if (isArrEqual(A, B, lenA, lenB))
  {
      cout<<"Arrays are equal";
  }
  else
  {
    cout<<"Arrays are not equal";
  }
         
							}
						}
						break;
						case 8:
							{
								void sortedMerge(int a[], int b[], int res[],   int n, int m)   
{  

    int i = 0, j = 0, k = 0;  
    while (i < n) {  
        res[k] = a[i]; 
        i += 1;  
        k += 1;  
    }  
    while (j < m)
	 {  
        res[k] = b[j]; 
        j += 1;  
        k += 1;  
    }  
  
    sort(res, res + n + m);  
}  
  
int main()  
{  
    int a[] = { 10, 5, 15, 22, 100 };  
    int b[] = { 20, 3, 2, 12, 1, 7 };  
    int n = sizeof(a) / sizeof(a[0]); 
    int m = sizeof(b) / sizeof(b[0]);  
  
    int res[n + m];  
    sortedMerge(a, b, res, n, m);   
  
    cout << "The sorted array is: ";  
    for (int i = 0; i < n + m; i++)  
        cout << " " << res[i];  
    cout << "\n";  
  
    return 0; 
							}
}
break;
case 9:
	{
		int maxAbsDiff(int arr[], int n)
{ 
      sort(arr,arr+n); 
      return arr[n-1]-arr[0];
}
int main()
{
    int arr[] = { 2, 1, 5, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maxAbsDiff(arr, n);
	
	
	}
}
break;
case 10:
	{
	cout<<"invalid input"<<endl;
	}
}


