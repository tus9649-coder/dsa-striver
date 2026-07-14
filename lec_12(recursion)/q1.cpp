//fibonaci series from recursion

#include <bits/stdc++.h>
using namespace std;
int fibo(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;
    
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n,fibo_num;
    cout<<"enter a number."<<endl;
    cin>>n;
    fibo_num=fibo(n);
    cout<<n<<"th fibonaci number is "<<fibo(n)<<endl;
    return 0;
}