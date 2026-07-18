// optimal approach for sorting an array of 0s 1s and 2s.
#include <iostream>
#include <vector>
using namespace std;
void sort_arr(vector<int> &arr)
{
    int n = arr.size();
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (arr[mid] == 1)
            mid++;
        else if (arr[mid] == 0)
            swap(arr[mid++], arr[low++]);
        else
            swap(arr[mid],arr[high--]); 
    }
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

    sort_arr(ivec);

    //print array
    for(const auto &x:ivec)
    {
        cout<<x<<" ";
    }
    return 0;
}