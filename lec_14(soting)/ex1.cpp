//selection sort
#include <bits/stdc++.h>
using namespace std;

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

    //inplement lelection sort
    for (int i = 0; i <= n-2; i++)
    {
        int mini = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[mini])
            mini = j;
        }
        swap(arr[i],arr[mini]);
    }
    
    //print array
    for (const auto &x : arr)
    {
        cout<<x<<" ";
    }

    return 0;
}