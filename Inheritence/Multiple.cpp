#include<iostream>
using namespace std;
class Cat
{
    public:
    void sounds()
    {
        cout<<"Maaaaaauu"<<endl;
    }
};
class Dog
{
    public:
    void sound()
    {
        cout<<"Bhaauuuuuuu"<<endl;
    }
};
class Animal : public Cat, public Dog
{
    public:
    void zoo()
    {
        cout<<"All zoo members"<<endl;
    }
};
int main()
{
    Animal a;
    a.sounds();
    a.sound();
    a.zoo();
    return 0;
}
