#include <stdio.h>

int main()
{

    int a;

    scanf("%d", &a);
    for (int i = 0; i < 2 * a - 1; i++)
    {
        if (i == 0 || i == 2 * a - 2)
        {
            for (int j = 0; j < 2 * a - 1; j++)
            {
                printf("%d ", a);
            }
        }
        else
        {
            for (int j = 0; j < 2 * a - 1; j++)
            {
                if(j!=0){                
                printf("%d ", a);
            }
        }
        printf("\n");
    }
}