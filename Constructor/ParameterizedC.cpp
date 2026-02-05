#include<iostream>
using namespace std;
class Shifa
{
    public:
    int a;
    Shifa(int x)
    {
        a = x;
    }
};
int main()
{
    Shifa s(50);
    cout<<s.a;
}