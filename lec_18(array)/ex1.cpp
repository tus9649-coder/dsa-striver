//left rotate array by one place
#include <iostream>
#include <vector>
using namespace std;
void rotate_by_one(vector<int>&arr,int n)
{
    int last = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=last;
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
    rotate_by_one(ivec,n);

    //print array
    for(const auto &x:ivec)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}