// longest subarray with sum k;
//  brutte force
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int subarr(vector<int> &arr, int k)
{
    int n = arr.size();
    int i = 0, j = 0;
    int sum = 0, len = 0, maxlen = len;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                len = j - i + 1;
                maxlen = max(len, maxlen);
            }
        }
        sum=0;
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