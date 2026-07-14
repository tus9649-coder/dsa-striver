//print name n times using recursion 
#include <bits/stdc++.h>
using namespace std;
void print_name(int n,string name)
{
    if(n==0) return;
    cout<<name<<endl;
    print_name(n-1,name);
}
int main()
{
    print_name(2,"tushar");
    print_name(200,"genius");
    return 0;
}