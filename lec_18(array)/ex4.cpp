//move all the zeroes to end of the array by brutte force method.
#include <iostream>
#include <vector>
using namespace std;
void remove_zeroes(vector<int>&arr)
{
    vector<int>temp;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        if(arr[i]!=0)
        temp.push_back(arr[i]);
    }
    int index=0;
    for(const auto &x:temp)
    {
        arr[index]=x;
        index++;
    }
    for(int i=index;i<n;i++)
    {
        arr[i]=0;
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
    remove_zeroes(ivec);

    //print array
    for(const auto &x:ivec)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}