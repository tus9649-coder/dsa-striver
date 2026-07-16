//brute approach for no which appear only onece
#include <iostream>
#include <vector>
using namespace std;
int once_num(vector<int>&arr)
{
    int n = arr.size(),maxi=arr[0];
    for (int i = 0; i <n; i++)
    {
        if(arr[i]>maxi)
        maxi=arr[i];
    }
    //hash
    vector<int>hash(maxi+1,0);
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    
    //search 
    for (int i = 0; i < n; i++)
    {
        if(hash[arr[i]]==1)
        {
            return arr[i];
        }
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