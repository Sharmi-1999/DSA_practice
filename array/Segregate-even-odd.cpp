// Brute Force (Time complexity: O(n) and Space Complexity: O(n))

#include <iostream>
using namespace std;

int main() {
	int arr[] = {1,9,5,3,2,6,7,1,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int b[n];
	int j=0;
	for(int i=0;i<n;i++)
	{
	    if(arr[i]%2==0)
	    {
	        b[j]=arr[i];
	        j++;
	    }
	}
	for(int i=0;i<n;i++)
	{
	    if(arr[i]%2!=0)
	    {
	        b[j]=arr[i];
	        j++;
	    }
	}
	for(int i=0;i<n;i++)
	{
	   cout<<b[i]<<" ";
	}
	return 0;
}

// Optimal solution using Lomuto’s Partition Scheme (Time complexity: O(n) and Space Complexity: O(1))

#include <iostream>
using namespace std;

int main() {
	int arr[] = {1,9,5,3,2,6,7,1,1};
	int n = sizeof(arr)/sizeof(arr[0]);
	int i=-1;
	for(int j=0;j<n;j++)
	{
	    if(arr[j]%2==0)
	    {
	     i++;
	     swap(arr[i],arr[j]);
	    }
	}
	for(int j=0;j<n;j++)
	{
	    cout<<arr[j]<<" ";
	}
	return 0;
}