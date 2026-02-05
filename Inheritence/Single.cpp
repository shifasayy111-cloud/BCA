#include<iostream>
using namespace std;
class Shifa
{
    public:
    void shifu()
    {
        cout<<"this is shifa class";
    }
};
class Misba:public Shifa
{
    public:
    void missu()
    {
        cout<<"this is misba class";
    }
};
int main()
{
    Misba A;
    A.shifu();
    A.missu();
    return 0;
}
