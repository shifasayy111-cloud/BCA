#include<stdio.h>
int main()
{
    int num[]={20,30,60,90,40};
    int length=sizeof(num)/sizeof(num[0]);
    printf("%d",length);
    return 0;
}