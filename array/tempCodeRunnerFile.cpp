#include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// int binarySearchFirst(int arr[], int n, int x)
// {
//     int low = 0, high = n - 1, mid, res = -1;
//     while (low <= high)
//     {
//         mid = low + (high - low) / 2;
//         if (x == arr[mid])
//         {
//             res = mid;
//             high = mid - 1;
//         }
//         else if (x < arr[mid])
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     return res;
// }

// int binarySearchLast(int arr[], int n, int x)
// {
//     int low = 0, high = n - 1, mid, res = -1;
//     while (low <= high)
//     {
//         mid = low + (high - low) / 2;
//         if (x == arr[mid])
//         {
//             res = mid;
//             low = mid + 1;
//         }
//         else if (x < arr[mid])
//             high = mid - 1;
//         else
//             low = mid + 1;
//     }
//     return res;
// }

// int main()
// {
//     int arr[] = {1, 2, 3, 3, 3, 3, 10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int x = 10;
//     int count = binarySearchLast(arr, n, x) - binarySearchFirst(arr, n, x) + 1;
//     if (count > n / 2)
//     {
//         cout << "It is a majority element";
//     }
//     else
//     {
//         cout << "It is not a majority element";
//     }
//     return 0;
// }