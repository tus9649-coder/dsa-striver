//print divisors
// #include <bits/stdc++.h>
// void divisors(int n)
// {
//     for(int i = 1;i<=n;i++)
//     {
//         if(n%i==0)
//         std::cout<<i<<" ";
//     }
// }
// int main()
// {
//     divisors(36);
//     return 0;
// }

//method 2

#include <bits/stdc++.h>
using namespace std;
void divisor(int n)
{
    vector<int>ivec;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            ivec.push_back(i);
            if(n/i!=i)
            {
                ivec.push_back(n/i);
            }
        }
    }
    sort(ivec.begin(),ivec.end());
    for(auto x:ivec)
    {
        cout<< x <<" ";
    }
    cout<<endl;
}
int main()
{
    divisor(36);
    divisor(100);
    return 0;
}
