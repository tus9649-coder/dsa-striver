//optimal method for removing dublicate. 
//for sorted array only.
#include <iostream>
#include <vector>
using namespace std;
int remove_dublicate(vector<int>&arr,int n)
{
    int i=0;
    for (int j = 0; j < n; j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
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