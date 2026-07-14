//gcd or hcf;
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    for(int i=min(a,b);i>=1;i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
        }
    }
    return 1;
}
int main()
{
    int num1,num2;
    cout<<"Enter two numbers."<<endl;
    cin>>num1>>num2;
    cout<<"gcd of "<<num1<<" and "<<num2<<" is "<<gcd(num1,num2)<<endl;
    return 0;
}