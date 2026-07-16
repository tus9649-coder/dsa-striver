//optimal approach by xor method
// xor of any num with 0 gives the num itself.
//xor of num with itself gives 0.
#include <iostream>
#include <vector>
using namespace std;
int find_missing(vector<int>&arr,int n)
{
    int xor1=0,xor2=0;
    for(int i=0;i<=n;i++)
    {
        xor1=xor1^i;
    }
    for(int i=0;i<n-1;i++)
    {
        xor2=xor2^arr[i];
    }
    return xor1^xor2;
}
int main()
{
    //setup array
    vector<int>ivec;
    int n,num;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        ivec.push_back(num);
    }
    //call
    num = find_missing(ivec,6);
    cout<<"Missing number = "<<num<<endl;
    return 0;
}