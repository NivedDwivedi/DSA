#include <bits/stdc++.h> 
using namespace std; 
  

int main() 
{ 
    int A[] = { 1, 4, 45, 6, 10, 8 }; 
    int sum = 22; 
    int arr_size = 6;
    int low,high;
    sort(A,A+6);
	
	for(int i=0;i<arr_size-2;i++)
	{
		low=i+1;
		high=arr_size-1;
		while(low<high)
		{
			if(A[i]+A[low]+A[high]==sum)
			{
				cout<<"Triplets are:"<<A[i]<<" "<<A[low]<<" "<<A[high];
				break;
			}
			else if(A[i]+A[low]+A[high]<sum)
			{
				low++;
			}
			else
			{
				high--;
			}
		}
		
	} 
  
    
  
    return 0; 
} 
