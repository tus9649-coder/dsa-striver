// insertion sort
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = i,j=i-1;
        while(arr[j]>arr[key] && j>=0)
        {
            swap(arr[j],arr[key]);
            key=j;
            j--;
        }
    }
}
int main()
{
    // set array
    int n;
    cin >> n;
    int arr[n];
    for (auto &x : arr)
    {
        cin >> x;
    }

    insertion_sort(arr, n);

    // print array
    for (const auto &x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
