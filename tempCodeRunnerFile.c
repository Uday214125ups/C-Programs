#include<stdio.h>

int main(){
    int a,e,b;
            int pes=0,sum=0,count=0;

    scanf("%d",&a);
    int d[a];
    int x;
    for (int i=0; i<a; i++)
    {
        scanf("%d",&x);
    }

    for (int i = a; i > 0; i /= 10)
        {
            count++;
            e=0;
        

    for (int i = a; i > 0; i /= 10)
        {
            pes=0,sum=0;

            b = i % 10;
            pes++;

            if (pes == 1)
               { sum+= b; d[e]=sum;e++;}
              
            if (pes == count)
               { sum+= b; d[e]=sum;e++;}
        
        

        }

        for (int i = 0; i<e; i++)
        printf("%d\n",d[i]);
}
}