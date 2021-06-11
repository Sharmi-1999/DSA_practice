#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {0, 4, 3, 2, 7, 8, 2, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        int index = arr[i]%n;
        arr[index] = arr[index] + n;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=n*2)
        cout<<i<<" ";
    }
    cout<< endl;
    return 0;
}