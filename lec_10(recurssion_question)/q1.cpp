//sum of first n natural numbers
#include <bits/stdc++.h>
using namespace std;
// int sum(int n)
// {
//     if(n==1)
//     return 1;
//     return n+sum(n-1);
// }
// int main()
// {
//     int s;
//     s=sum(10);
//     cout<<s<<endl;
//     return 0;
// }

//method2

void sum_up(int i,int sum)
{

    if(i==0)
    {
        cout<<sum<<endl;
        return;
    }
    sum_up(i-1,sum+i);
}
int main()
{
    sum_up(10,0);
}