//factorial using recursion
#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int factoriyal , n;
    cout<<"Enter a number."<<endl;
    cin>>n;
    factoriyal = fact(n);
    cout<<factoriyal<<endl;
    return 0;
}