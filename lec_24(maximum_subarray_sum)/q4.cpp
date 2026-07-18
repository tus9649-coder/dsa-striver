//optimal approach for the maximum sum of the subarray.
//kadanes algorithm
//finding and printing
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> max_sum(vector<int>&arr)
{
    int n = arr.size();
    int sum=0,maxsum=INT_MIN;
    int start=0,ansstart=0,ansend=0;
    for (int i = 0; i < n; i++)
    {
        if(sum==0)
        start=i;
        sum+=arr[i];
        if(sum>maxsum)
        {
            maxsum=sum;
            ansstart=start,ansend=i;
            
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return {ansstart,ansend};
    
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

    vector<int>v= max_sum(ivec);
    for (int i = v[0]; i <= v[1]; i++)
    {
        cout<<ivec[i]<<" ";
    }
    
    cout<<endl;

    return 0;
}