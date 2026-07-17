//better approach using hash maps;
// longest subarray with sum k;
//  optimal only for positive and zeroes.
#include<bits/stdc++.h>
using namespace std;
int subarr(vector<int> &arr, int k)
{
    int n = arr.size();
    int i=0,j=0,sum=0;
    int len=0,maxlen=len;
    for ( j = 0; j < n; j++)
    {
        sum+=arr[j];
        if(sum==k)
        {
            len = j-i+1;
            maxlen=max(maxlen,len);
        }
        while(sum>k && i<=j)
        {
            sum = sum - arr[i];
            i++;
        }
    }
    return maxlen;
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

    int k;
    cin >> k;
    // call functn
    int maxlen = subarr(ivec, k);
    cout << maxlen << endl;

    return 0;
}