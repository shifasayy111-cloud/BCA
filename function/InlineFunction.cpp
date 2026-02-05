#include<iostream>
using namespace std;

inline int AreaCircle(int r)
{
    return 3.14 * r * r;
}
int main()
{
    int x=5;
    cout<<"Area of Circle is  " << AreaCircle(x) <<endl;
    return 0;
}