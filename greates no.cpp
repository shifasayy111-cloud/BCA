#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Enter the value:-";
    cin>>a>>b>>c;

    if(a>=b && a>=c)
    {
        cout<<"a is the greater number"<<a;
    }

    else if (b>=a && b>=c)
    {
        cout<<"b is the greater number"<<b;
    }

    else 
    {
        cout<<"c is the greater number"<<c;
    }

    return 0;
}