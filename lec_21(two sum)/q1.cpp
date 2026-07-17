//two sum brutee 
#include <bits/stdc++.h>
using namespace std;
bool twosum(vector<int>&arr,int target)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]+arr[j]==target)
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