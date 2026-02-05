#include<iostream>
using namespace std;

int swapp(int &a, int &b);

int main()
{
    int x=70,y=50;
    cout<<"Before swapping:-"<<endl;
    cout<< "x = " << x <<"y = " << y <<endl;
    swapp(x,y);
    cout<<"After swapping:- "<<endl;
    cout<<"x = " << x << "y = " << y <<endl;
    return 0;
}
int swapp(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}