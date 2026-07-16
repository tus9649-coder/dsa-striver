//optimal approach for once appearing element.
#include <iostream>
#include <vector>
using namespace std;
int once_num(vector<int>&arr)
{
    int n = arr.size(),xo=0;
    for (int i = 0; i < n; i++)
    {
        xo^=arr[i];
    }
    return xo;
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