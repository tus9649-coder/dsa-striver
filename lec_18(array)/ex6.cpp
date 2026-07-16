// taking union of two arrays
// optimal approach
// arrays are already sorted
#include <bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> a, vector<int> b)
{
    int n1 = a.size(), n2 = b.size(), i = 0, j = 0;
    vector<int> ans;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (ans.size() == 0 || a[i] != ans.back())
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (ans.size() == 0 || b[j] != ans.back())
            {
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (ans.size()==0 || a[i] != ans.back())
        {
            ans.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (ans.size() == 0 || b[j] != ans.back())
        {
            ans.push_back(b[j]);
        }
        j++;
    }

    return ans;
}
int main()
{
    // setup array
    int n1;
    cin >> n1;
    vector<int> ivec;
    int num;
    for (int i = 0; i < n1; i++)
    {
        cin >> num;
        ivec.push_back(num);
    }
    // setup array
    int n2;
    cin >> n2;
    vector<int> ivec2;
    for (int i = 0; i < n2; i++)
    {
        cin >> num;
        ivec2.push_back(num);
    }

    // call
    vector<int> uni = func(ivec, ivec2);

    // print array
    for (const auto &x : uni)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
