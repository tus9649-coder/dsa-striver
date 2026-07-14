//check if palindrome
#include <bits/stdc++.h>
using namespace std;
bool is_palindrome(string str,int n,int i=0)
{
    if(i>=n/2)
        return true;
    if(str[i]!=str[n-1-i])
        return false;
    return  is_palindrome(str,n,i+1);
    
}
int main()
{
    string name;
    cout<<"enter your name"<<endl;
    cin>>name;
    if(is_palindrome(name,name.size()))
    cout<<"yes "<<name<<" is a palindrome."<<endl;
    else
    cout<<"no "<<name<<" is a palindrome."<<endl;
    return 0;
}