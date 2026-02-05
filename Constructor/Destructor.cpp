#include<iostream>
using namespace std;
class Student
{
    public:
    int age;
    Student(int a)
    {
        cout<<"my age is : "<<age<<endl;
    }
    ~Student()
    {
        cout<<"Destructor called"<<age<<endl;
    }
};
int main()
{
    Student s(10);
    {
        Student s2(20);
    }
}