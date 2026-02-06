#include<iostream>
using namespace std;

class student
{
    public:
    int Rollno;
    int marks;

    void show()
    {
        cout<<"Enter the marks and Rollno:-";
        cin>> Rollno >> marks;
    }
    void display()
    {
        cout<< Rollno << "Rollno" << marks << "marks" <<endl;
    }
};
int main()
{
    student s[3];

    for(int i=0; i<3; i++)
    {
        cout<<" Student " << i+1 <<endl;
        s[i].show();
    }

    cout<<"Student details :-"<<endl;
    for(int i=0; i<3; i++)
    {
        s[i].display();
    }

    return 0;
}