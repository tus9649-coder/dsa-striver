//two sum better
#include <bits/stdc++.h>
using namespace std;
bool twosum(vector<int>&arr,int target)
{
    int n = arr.size();
    map<int,int>hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]=i;
    }
    for (int i = 0; i < n; i++)
    {
        int oth = target -arr[i];
        if(hash.find(oth)!=hash.end())
        {
            return true;
        }
    }
    return false;
}
int main()
{
    
    // setup array
    vector<int> ivec;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        ivec.push_back(num);
    }

    //call
    int target;
    cin>>target;
    bool value=twosum(ivec,target);
    if(value)
    cout<<"True";
    else
    cout<<"false";
    return 0;
}