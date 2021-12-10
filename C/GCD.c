#include <stdio.h>

int main()
{
    int a, b, first[] = {}, sec[] = {},m=0,n=0;
    printf("enter the numbers  to find gcd");

    scanf("%d%d", &a, &b);





// Set of factors of first number
    for (int i = a; i >= 1; i--)
    {
     
            if (a % i == 0)
            {
                first[m] = i;
                m++;
            }
    }







// set of factorrs of second number 
    for (int i =b; i>=1; i--)
    {
        
        if (a % i == 0)
            sec[n] =i;
            n++;
    }







// comparison of array of factors of both number from the back side
    for (int i =m; i>=0; i--)
    {
        for (int j = n; j>=0; j--)
        {
            if (first[i] == sec[j])
            {
                printf("%d ",first[m]);
                return 0;
            }
                
        }
    }
}
