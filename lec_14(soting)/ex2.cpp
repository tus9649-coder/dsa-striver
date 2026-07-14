#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int arr[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int did_swap = 0;
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                did_swap = 1;
            }
        }
        if(did_swap == 0)    //optimization
        break;
    }
    
}
int main()
{
    //set array
    int n;
    cin>>n;
    int arr[n];
    for(auto &x:arr)
    {
        cin>>x;
    }

    bubble_sort(arr,n);

     //print array
    for (const auto &x : arr)
    {
        cout<<x<<" ";
    }

    return 0;
}
