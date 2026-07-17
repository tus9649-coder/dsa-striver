//better approach using hash maps;
// longest subarray with sum k;
//  brutte force
#include<bits/stdc++.h>
using namespace std;
int subarr(vector<int> &arr, int k)
{
    int n = arr.size(),sum=0,maxlen=0,rem;
        map<int,int> pre_sum;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(sum==k) maxlen=i+1;
            rem=sum-k;
            if(pre_sum.find(rem)!=pre_sum.end())
                maxlen=max(maxlen,i-pre_sum[rem]);
            if(pre_sum.find(rem)==pre_sum.end())
                pre_sum[sum]=i;
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