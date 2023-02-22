#include <bits/stdc++.h> 
using namespace std; 
  
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
         
  return 0; 
}
