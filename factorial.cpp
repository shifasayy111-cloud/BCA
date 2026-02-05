#include<iostream>
using namespace std;

int main()
{
    int fact=1,num;

    cout<<"Enter the number:-";
    cin>>num;

    for(int i=1;i<=5;i++)
    {
        fact =fact * i;
    }

    cout<<num<<" factorial is a "<<fact;

    return 0;
}