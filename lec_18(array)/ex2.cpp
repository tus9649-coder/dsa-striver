//brutte force array by d places left rotation.
#include <iostream>
#include <vector>
using namespace std;
void rotate_by_d(vector<int>&arr,int n,int d)
{
    if(n==0) return;
    vector<int> temp;
    d=d%n;
    for(int i=0;i<d;i++)
    {
        temp.push_back(arr[i]);
    }
    for(int i=0;i<n-d;i++)
    {
        arr[i]=arr[i+d];
    }
    int j=0;
    for(int i=n-d;i<n;i++)
    {
        arr[i]=temp[j];
        j++;
    }
}
int main()
{
     // setup array
    int n;
    cin >> n;
    vector<int> ivec;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        ivec.push_back(num);
    }
     //call
    int d;
    cin>>d;
    rotate_by_d(ivec,n,d);

    //print array
    for(const auto &x:ivec)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}