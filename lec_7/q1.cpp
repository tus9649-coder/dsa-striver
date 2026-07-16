#include <iostream>
using namespace std;
int digits(int n)
{
    int digit = 0;
    while(n>0)
    {
        digit++;
        n=n/10;
    }
    return digit;
}
int main()
{
    int num;
    cin>>num;
    cout<<num<<" has "<< digits(num) <<" digits."<< endl;
    return 0;
}