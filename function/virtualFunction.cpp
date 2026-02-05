#include <iostream>
using namespace std;

class Queen
{
public:
    virtual void show()
    {
        cout << " This is Queen class";
    }
};
class king : public Queen
{
    public :
        void show(){
            cout << "This is king class";
}
};
int main()
{
    Queen* q;
    king p;
    q = &p;
    q->show();
    return 0;
}