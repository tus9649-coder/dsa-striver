//better approach for maximum sum of the subarray.
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int max_sum(vector<int>&arr)
{
    int n = arr.size();
    int sum=0,maxsum=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = i; j < n; j++)
        {
            sum+=arr[j];
            maxsum = max(sum,maxsum);
        }
        
    }
    return maxsum;
    
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

    int m = max_sum(ivec);
    cout<<m<<endl;

    return 0;
}