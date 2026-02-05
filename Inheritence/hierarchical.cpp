#include<iostream>
using namespace std;
class sufiyan
{
    public:
    void sufi()
    {
        cout<<"this is sufi class"<<endl;
    }
};
class anam: public sufiyan
{
    public:
    void anu()
    {
        cout <<"this is anuu class"<<endl;
    }
};
class aqdas :public sufiyan
{
    public:
    void addyy()
    {
        cout<<"this is addyy class"<<endl;
    }
};
int main()
{
    anam a;
    aqdas b;

    a.anu();
    a.sufi();

    b.addyy();
    b.sufi();

    return 0;
}