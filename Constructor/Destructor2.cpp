#include<iostream>
using namespace std;

class emp
{
    public:
    int* data;

    emp()
    {
        data = new int(20);
        cout<<" memory allocated."<< endl;
    }
    ~ emp()
    {
        delete data;
        cout<<" memory freed . object destoryed ."<<endl;
    }
};
int main ()
{
    emp e;
    return 0;
}