#include<stdio.h>
int main()
{
    int length,breadth,area;
    printf("Enter L and B value");
    scanf("%d %d",&length,&breadth);
    area = length*breadth;
    printf("Area of Rectangle=%d",area);
    return 0;
}