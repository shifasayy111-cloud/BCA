#include<iostream>
using namespace std;

class student 
{
    public:
    int mark[5];
    
    void input()
    {
        for(int i=0;i<5;i++)
        {
            cout<<"Enter the marks:- "<< i+1 << ":";
            cin>> mark[i];
        }
    }
    void display()
    {
        for (int i=0;i<5;i++)
        {
            cout<<"mark[5] "<< " ";
        }
        cout<< endl;
    }
};
int main()
{
    student s;
    s.input();
    s.display();
    return 0;
}