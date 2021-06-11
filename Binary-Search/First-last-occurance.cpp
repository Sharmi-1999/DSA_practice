#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearchFirst(int arr[],int n,int x)
{
    int low=0,high=n-1,mid,res=-1;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(x==arr[mid])
        {
            res = mid;
            high = mid-1;
        }
        else if(x<arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return res;

}

int binarySearchLast(int arr[],int n,int x)
{
     int low=0,high=n-1,mid,res=-1;
    while(low<=high)
    {
        mid = low + (high-low)/2;
        if(x==arr[mid])
        {
            res = mid;
            low = mid+1;
        }
         else if(x<arr[mid])
            high = mid-1;
        else
           low = mid+1;
    }
    return res;

}

int main(){
    int arr[] = {2, 4, 10, 10, 10, 18, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    cout<< "First Index : "<< binarySearchFirst(arr,n,x) << endl;
    cout<< "Last Index : "<<binarySearchLast(arr,n,x)<<endl;
    return 0;
}