//brutte force method.
#include <iostream>
#include <vector>
using namespace std;
int remove(vector<int>&arr,int n)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {
        bool add=true;
       for(auto x:temp)
       {
        if(arr[i]==x)
        add=false;
       }
       if(add==true)
       temp.push_back(arr[i]);
    }
    int j;
    for ( j = 0; j < temp.size(); j++)
    {
        arr[j] = temp[j];
    }
    return j;
    

}
int main()
{
    int n,num;
    cin>>n;
    vector<int> ivec;
    for(int i =0;i<n;i++)
    {
        cin>>num;
        ivec.push_back(num);
    }
    
    int new_size = remove(ivec,n);
    for(int i=0;i<new_size;i++)
    {
        cout<<ivec[i]<<" ";
    }
    cout<<endl;

    return 0;
}