#include <iostream>
#include <string>
using namespace std;

int main()
{
    //set string
    string str;
    cin>>str;

    //precompute
    int hash[26]={0};
    for(int i=0;i<str.size();i++)
    {
        hash[str[i]-'a']+=1;
    }

    //querry and fetcjhing

    int querry;
    cin>>querry;
    while(querry--)
    {
        char ch;
        cin>>ch;
        cout<<hash[ch-'a']<<" ";
    }
    cout<<endl;
    return 0;
}