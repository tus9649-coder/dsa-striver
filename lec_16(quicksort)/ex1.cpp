//quick sort (find a pivot and  place it in correct position recursivelly.)
#include <bits/stdc++.h>
using namespace std;
int func(vector<int> &arr, int low, int high)
{
    int i = low, j=high,pivot = low;

    while(i<j)
    {
        while (i<=high-1 && arr[i]<=arr[pivot])
        {
            i++;
        }
        while (j>=low+1 && arr[j]>arr[pivot])
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[pivot]);
    return j;
}
void quick_sort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int partition_index = func(arr, low, high); /*function to pick the pivot and place it in the  right position.
      and return the index of that position*/

    // call
    quick_sort(arr, low, partition_index - 1);
    quick_sort(arr, partition_index + 1, high);
}
int main()
{
    // setup vector

    vector<int> ivec;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        ivec.push_back(num);
    }

    // now sort using quick sort.
    quick_sort(ivec, 0, n - 1);

    // print sorted array

    for (const auto &x : ivec)
    {
        cout << x << " ";
    }

    return 0;
}