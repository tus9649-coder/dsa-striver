//missing number
#include <iostream>
#include <vector>
using namespace std;
int find_missing(vector<int>&arr)
{
    int n=arr.size();

    //hash arry
    vector<int>hash(n+1,0);
    int index=0;
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]=1;
    }

    //search hash array
    for(int i=1;i<hash.size();i++)
    {
        if(hash[i]==0)
            return i;
    }
    return -1;
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
    num = find_missing(ivec);
    cout<<"Missing number = "<<num<<endl;
    return 0;
}