//prime number method 1
#include <bits/stdc++.h>
using namespace std;
bool check_prime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
int main()
{
    int num;
    cout<<"Enter a nummber: ";
    cin>>num;
    if(check_prime(num))
    cout<<num<<" is prime number.";
    else
    cout<<num<<" is not a prime number.";
    return 0;
}
