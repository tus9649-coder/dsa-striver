//two sum better
//optimal for type 1;
#include <bits/stdc++.h>
using namespace std;
bool twosum(vector<int>&arr,int target)
{
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int i=0,j=n-1;
    while(i<j)
    {
        int sum = arr[i]+arr[j];
        if(sum<target)
            i++;
        else if(sum>target)
            j--;
        else
            return true;
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