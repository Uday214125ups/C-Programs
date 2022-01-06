#include <stdio.h>

int main()
{
    int a, b, c,m, k,count=0;
    scanf("%d", &a);

    if (a <= 100) // constraint
    {
        for (int i = 0; i < a; i++) // for number of test cases
        {
            scanf("%d%d",&b,&c);
            for (int j=0; j < b; j++)
            {
                scanf("%d",&m);

                k=c+m;
                if(k%7==0) count++;

            }
            
            
        }printf("%d",count);
    }
}