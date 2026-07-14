//print linearly fro 1 to n
#include <bits/stdc++.h>
using namespace std;
void print_num(int n)
{
    if(n==0)
    return;
    print_num(n-1);
    cout<<n<<" ";
}
int main()
{
    print_num(12);
    return 0;
}