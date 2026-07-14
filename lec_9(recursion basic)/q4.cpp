//print from n to 1 by backtraking
#include <bits/stdc++.h>
using namespace std;
void print_num(int i,int n)
{
    if(i>n)
    return;
    print_num(i+1,n);
    cout<<i<<" ";
}
int main()
{
    print_num(1,10);
    return 0;
}