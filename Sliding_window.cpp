#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 }; 
    int k = 4,max=0; 
    int n = 9; 
    for(int i=0;i<=n-k;i++)
    {
    	int sum=0;
    	for(int j=0;j<k;j++)
    	{
    		sum=sum+arr[i+j];
    		
		}
		cout<<sum<<" ";
		if(sum>max)
		{
			max=sum;
		}
	}
	
	cout<<"\n"<<"MaxSum:"<<max;
    return 0; 
} 
