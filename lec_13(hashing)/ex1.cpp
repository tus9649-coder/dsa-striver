// hashing number
#include <iostream>
using namespace std;

int main()
{
    //seting array
    int n;
    cin>>n;
    int arr[n];
    for(auto &x:arr)
    {
        cin>>x;
    }

    //precompute
    
    int hash[13]={0};
    for(int index = 0 ;index<n;index++)
    {
        hash[arr[index]]+=1;
    }

    //fetching and taking querry

    int querry;
    cin>>querry;
    while(querry--)
    {
        int num;
        cin>>num;
        cout<<hash[num]<<endl;    //fetch

    }
    return 0;
}