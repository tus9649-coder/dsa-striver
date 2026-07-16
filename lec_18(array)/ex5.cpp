// moving zeroes to end by optimal approach
// move all the zeroes to end of the array by brutte force method.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void remove_zeroes(vector<int> &arr)
{
    int n = arr.size();
    int i, j = -1;
    // find first zero
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    // no zeroes
    if (j == -1)
        return;

    //**i track non zero and j zero in one loop**
    for (i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
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

    // call
    remove_zeroes(ivec);

    // print array
    for (const auto &x : ivec)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}