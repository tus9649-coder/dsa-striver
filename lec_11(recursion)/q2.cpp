//tryiing to do in best cases q1
#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n,int i = 0)
{
    if(i>=n/2) return;
    swap(arr[i],arr[n-1-i]);
    reverse(arr,n,i+1);
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
    reverse(arr,5);
    for(const auto &x:arr)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}