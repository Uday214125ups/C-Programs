#include <stdio.h>

int main()
{
    int a, b, m, k;
    scanf("%d", &a);

    if (a <= 100) // constraint
    {
        for (int i = 0; i < a; i++) // for number of test cases
        {
            scanf("%d",&b);
            if (b < 1000000000)// constraint
            {
                for (int j = 1; j < b; j++)
                {
                    k = (j * (j + 1)) / 2;
                    if (b > k)
                    {
                        m = j-1;
                        break;
                    }
                }
            }
            printf("%d",m);
            
        }
    }
}