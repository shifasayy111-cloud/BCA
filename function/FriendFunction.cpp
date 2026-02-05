#include <iostream>
using namespace std;

class Queen
{
    int a = 50;

public:
   friend void display(Queen obj);
};
void display(Queen obj)
{
    cout << obj.a;
}
int main()
{
    Queen q;
    display(q);
    return 0;
}