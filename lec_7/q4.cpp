//armstrong number
#include <bits/stdc++.h>
using namespace std;
void armstrong(int n)
{
    int c=0,num = n;
    while(n>0)
    {
        c++;
        n/=10;
    }
    n=num;
    int digit,num2 = 0;
    while(n>0)
    {
        digit = n%10;
        num2+=pow(digit,c);
        n/=10;
    }
    if(num == num2)
    cout<<"yess";
    else
    cout<<"noo";
}
int main()
{
    unsigned int num;
    cin>>num;
    armstrong(num);

}