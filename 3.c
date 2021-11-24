#include <stdio.h>

int main()
{
    int a, i, sum = 0, prime = 0;
    int flag=0;
    printf("enter any num");

    scanf("%d", &a);

    for (i = (a - 1); i > 1; i--)
    {

        if (a % i == 0)
        flag=1;
    }
    if (flag== 0)
        printf("the number is prime");
    else
        printf("the number is not prime");
}
