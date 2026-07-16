//better approach if hashing not work -ve no and size of numbers is big
#include <iostream>
#include <vector>
#include <map>
using namespace std;
int once_num(vector<int>&arr)
{
    int n = arr.size();
    map<long long,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
    }

    for(auto it:mp)
    {
        if(it.second==1)
        return it.first;
    }
    return -1;
}
int main()
{
    //setup array
    vector<int> ivec;
    int n, num;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        ivec.push_back(num);
    }

    //call
    int once = once_num(ivec);
    cout << "number that appears once is = " << once << endl;
    return 0;
}