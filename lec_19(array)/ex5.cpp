// optimal approach
// for maximum consecutive 1
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int max_cons(vector<int> &arr)
{
    int n = arr.size();
    int count = 0, maxc = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            if (count > maxc)
            {
                maxc = count;
            }
            count = 0;
        }
    }
    if (count > maxc)
    {
        maxc = count;
    }
    return maxc;
}
using namespace std;
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

    // call
    int freq = max_cons(ivec);
    cout << "maximum consecutive = " << freq << endl;
    return 0;
}
