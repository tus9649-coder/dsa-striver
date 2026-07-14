//optimal soln for array by d places left rotation.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void rotate_by_d(vector<int>&arr,int n,int d)
{
    d=d%n;
    reverse(arr.begin(),arr.begin()+d);
    reverse(arr.begin()+d,arr.begin()+n);
    reverse(arr.begin(),arr.end());
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