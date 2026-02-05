#include<iostream>
using namespace std;
int sub(int a, int b);
int add (int p, int q);

int main()
{
    int x=100 ,y=900;
    cout<<"subtraction of tow number :-  "<< sub(x,y) <<endl;
    cout<<"addition of tow number :-  "<< add(x,y) <<endl;
    return 0;
}
int sub(int a, int b)
{
    return a-b;
}
int add(int p, int q)
{
    return p+q;
}