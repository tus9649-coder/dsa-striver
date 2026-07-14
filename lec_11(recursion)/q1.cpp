//write a program to reverse an array using recursion

#include <bits/stdc++.h>
using namespace std;
void rev_arr(int *ptr,int n,int i)  //n in paramete is last index of array.
{
    if(i>=n)
    {
        return;
    }
    swap(ptr[i],ptr[n]);
    rev_arr(ptr,n-1,i+1);
}
int main()
{
    int arr[5] = {1,2,30,4,5};
    for(const auto &x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    rev_arr(arr,n-1,0);
    for(const auto &x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}