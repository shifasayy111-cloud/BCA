#include<iostream>
using namespace std;
 
int &billu(int arr[], int index);

int main()
{
    int number[5]={10,20,30,40,50};

    cout<<" Before change " <<endl;
    cout<< number[0] << " " << number[1] << " " << number[2] << " " << number[3] << " " << number[4] <<endl;
    billu(number,2)=70;
    cout<<" After change " <<endl;
    cout<< number[0] << " " << number[1] << " " << number[2] << " " << number[3] << " " << number[4] <<endl;
}
int &billu(int arr[], int index )
{
    return arr[index];
}