//finding highest and lowest freq element
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

    //pre-compute
    unordered_map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
        mpp[arr[i]]++;
    }

    //finding largest and smallest frequencies element.
    
    int high = 0,low,hel,lel;
    //for high frequency
    for(const auto &y:mpp)
    {
        if(y.second > high)
        {
            high = y.second;
            hel = y.first;
        }
    }
    cout<<"Highest frequency element : frequency = "<<hel<<"  : "<<high<<endl;

    //for low frequency
    low = high;
    for(const auto &y : mpp)
    {
        if(y.second<low)
        {
            low = y.second;
            lel = y.first;
        }
    }
    cout<<"Lowest frequency element : frequency = "<<lel<<"  : "<<low<<endl;
    return 0;
}
