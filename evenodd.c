#include <stdio.h>
int main()
{
    int num;
    printf("Enter any number:-\n");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d this is even number\n", num);
    else
        printf("%d this is odd number\n", num);
    return 0;
}