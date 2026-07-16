//optimal aproach for missing number
#include <iostream>
#include <vector>
using namespace std;
int find_missing(vector<int>&arr,int n)
{
    int sum=0,n_sum = n*(n+1)/2;
    for(int i=0;i<arr.size();i++)
        sum+=arr[i];
    return n_sum-sum; 
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