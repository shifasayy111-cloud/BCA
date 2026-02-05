#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;

    student(string a, int b) : name(a), age(b) {}
    student(const student &other)
    {
        name = other.name;
        age = other.age;
    }
    void show()
    {
        cout << name  << " is " << age << " year old" << endl;
    }
};
int main()
{
    student s1("sofiya", 18);
    student s2 = s1;
    s2.show();
    return 0;
}