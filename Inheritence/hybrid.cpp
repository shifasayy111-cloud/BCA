#include<iostream>
using namespace std;
class A
{
    public:
    void showA()
    {
        cout<<"this is my A class"<<endl;
    }
}; 
class B: virtual public A 
{
    public:
    void showB()
    {
        cout<<"this is my B class"<<endl;
    }
};
class C : virtual public A
{
    public:
    void showC()
    {
        cout<<"this is my C class"<<endl;
    }
};
class D: public B, public C
{
    public:
    void showD()
    {
        cout<<"this is my D class"<<endl;
    }
};
int main()
{
    D t;
    t.showA();
    t.showB();
    t.showC();
    t.showD();

    return 0;
}