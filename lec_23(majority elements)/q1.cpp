//better approach for magority elements.
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int maj_element(vector<int>&arr)
{
    int n = arr.size();
    map<int,int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
        if(hash[arr[i]]>n/2)
            return arr[i];
    }
    return -1;
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

    int mj = maj_element(ivec);
    cout<<mj<<endl;
    
    
    return 0;
}