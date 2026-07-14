//brute method
#include <iostream>
#include <set>
#include <vector>
using namespace std;
int remove_dublicate(vector<int>&arr,int n)
{
    set<int>st;
    for(int i=0;i<n;i++)
    {
        st.insert(arr[i]);
    }
    int index=0;
    for(const auto &x:st)
    {
        arr[index]=x;
        index++;
    }
    return index;
}
int main()
{
    int n,num;
    cin>>n;
    vector<int> ivec;
    for(int i=0;i<n;i++)
    {
        cin>>num;
        ivec.push_back(num);
    }
    int new_size = remove_dublicate(ivec,n);
    for (int i = 0; i < new_size; i++)
    {
        cout<<ivec[i]<<" ";
    }
    cout<<endl;
    return 0;
}