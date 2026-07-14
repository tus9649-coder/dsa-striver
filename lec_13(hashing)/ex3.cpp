#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
    //set an array
    int n;
    cin>>n;
    int arr[n];
    for(auto &x :arr)
    {
        cin>>x;
    }


    //precompute
    map<int,int>mpp;
    for(const auto &y : arr)
    {
        mpp[y] +=1;
    }

    //querry
    int q;
    cin>>q;
    while(q--)
    {
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }
    return 0;
}