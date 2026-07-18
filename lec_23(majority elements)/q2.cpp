//optimall aaproach for majority elements.

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
int maj_element(vector<int>&arr)
{
    int n = arr.size();
    int el,count=0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
            el=arr[i];
        if(el==arr[i])
            count++;
        else
            count--;
    }
    return el;
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