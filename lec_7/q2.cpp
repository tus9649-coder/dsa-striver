#include <bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int num = 0,dig;
    while(n>0)
    {
        dig = n%10;
        num *=10;
        num+=dig;
        n/=10;
    }
    return num;
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int rev_num = reverse(num);
    cout<<rev_num<<endl;
    return 0;
}