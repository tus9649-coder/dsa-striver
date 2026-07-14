#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    int i = 0, j = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << j + 1;
        }
        cout << endl;
    }
}
void print4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }
}
void print5(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print6(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (n - 1 - i) * 2 + 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print9(int n)
{
    print7(n);
    print8(n);
}
void print10(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i <= n / 2)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < n - i; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
void print11(int n)
{
    for (int i = 0; i < n; i++)
    {
        int num = i % 2 == 0 ? 1 : 0;
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            // num=num==1?0:1;
            num = 1 - num;
        }
        cout << endl;
    }
}
void print12()
{

    for (int i = 0; i < 4; i++)
    {
        int num = 0;
        for (int j = 0; j < i + 1; j++)
        {
            num++;
            cout << num;
        }
        for (int j = 0; j < 8 - 2 * (i + 1); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << num;
            num--;
        }
        cout << endl;
    }
}
void print13(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}
void print14(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void print15(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - i; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void print16(int n)
{
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        cout<<endl;
        ch++;
    }
}
void print17(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch='A';
            for (int j = 0; j < n-i-1; j++)
            {
                cout<<" ";
            }
            for (int j = 0; j < 2*i+1; j++)
            {
                    cout<<ch;
                    j<i?ch++:ch--;
            }
            for (int j = 0; j < n-i-1; j++)
            {
                cout<<" ";
            }
            cout<<endl;
    }
    
}
void print18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'E'-i;
        for (int j = 0; j < i+1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout<<endl;
    }
}
void print19(int n)
{   int spaces=0;
    for (int i = 0; i < n; i++)
    {
        //stars
        for (int j = 0; j < n-i; j++)
        {
            cout<<"* ";
        }
        //spaces
        for (int j = 0; j < spaces; j++)
        {
            cout<<"  ";
        }
        //stars
        for (int j = 0; j < n-i; j++)
        {
                cout<<"* ";
        }
        cout<<endl;
        spaces=spaces+2;
    }
    spaces=2*n-2;
    for (int i = 0; i < n; i++)
    {
            for (int j = 0; j < i+1; j++)
            {
                    cout<<"* ";
            }
            for (int j = 0; j < spaces; j++)
            {
                cout<<"  ";
            }
            for (int j = 0; j < i+1; j++)
            {
                cout<<"* ";
            }
            cout<<endl;
            spaces-=2;
            
    }
    
}
void print20(int n)
{
    int spaces = 2*n-2;
    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i<n?i:2*n-i;
            for (int j = 0; j < stars; j++)
            {
              cout<<"* ";
            }
            for (int j = 0; j < spaces ; j++)
            {
                cout<<"  ";
            }
            for (int j = 0; j < stars; j++)
            {
                cout<<"* ";
            }

        cout<<endl;
        if(i<n) spaces-=2;
        else spaces+=2;
    }

}
void print21(int n)
{
    for (int i = 0; i < n; i++)
    {
            for (int j = 0; j < n; j++)
            {
                if(i==0 || i==n-1 || j==0 || j==n-1)
                cout<<"* ";
                else
                cout<<"  ";
            }
            cout<<endl;
    }
}
void print22(int n)
{
    for (int i = 0; i < 2*n-1; i++)
    {
        for (int j = 0; j < 2*n-1; j++)
        {
                int top = i;
                int left = j;
                int right = 2*n-2-i;
                int down = 2*n-2-j;
                cout<<n-min(min(left,right),min(top,down))<<" ";
        }
        cout<<endl;
    }
    
}
int main()
{
    // print1(8);
    // print2(10);
    // print6(5);

    // print9(5);
    print20(4);
    return 0;
}