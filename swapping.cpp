#include<iostream>
using namespace std;

int main()
{
    int num1,num2,next;
    cout<<"Enter the number:-";
    cin>>num1>>num2;

    cout<<"**Before Swapping**  " <<endl <<num1 <<num2 <<endl;

    next = num1;
    num1 = num2;
    num2 = next;

    cout<<"**After Swapping**  " <<endl <<num1 <<num2 <<endl;

    return 0;
}