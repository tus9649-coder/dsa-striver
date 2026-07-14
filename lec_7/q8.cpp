//by euclidean algorithm
#include <bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(a>0 && b>0)
    {
    if(a>b) a=a%b;
    else b= b%a;
    }
    return a==0?b:a;
}
int main()
{
    int num1,num2;
    cout<<"Enter two numbers."<<endl;
    cin>>num1>>num2;
    cout<<"gcd of "<<num1<<" and "<<num2<<" is "<<gcd(num1,num2)<<endl;
    return 0;
}