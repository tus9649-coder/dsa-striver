//print from n to 1
#include <bits/stdc++.h>
using namespace std;
void print_num(int n)
{
    if(n==0)
    return;
    cout<<n<<" ";
    print_num(n-1);
}
int main()
{
    print_num(4);
    return 0;
}