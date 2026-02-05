 #include<iostream>
 using namespace std;
 class A
 {
    public:
    void show()
    {
        cout<<"This is my A class"<<endl;
    }
 };
 class B : public A
 {
    public:
    void display()
    {
        cout<<"This is my B class"<<endl;
    }
 };
 class C : public B
 {
    public:
    void see()
    {
        cout<<"This is my C class"<<endl;
    }
 };
 int main()
 {
    C c;
    c.show();
    c.display();
    c.see();
    return 0;
 }