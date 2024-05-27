#include <stdio.h>
#include <stdlib.h>

int main()
{/*
    int t,y,a,b,other, sum, least;
    scanf("%d", &t);
    while (t>0)
    {
        t--;
        scanf("%d%d%d", &y,&a,&b);
        sum= y*a;
        if (y%2==0)
        {
        for (int i=0; i<=y ; i+=2)
        {
            other=y-i;
            if(i*a +((other*b)/2) < sum)
            {
                sum = i*a+((other*b)/2) ;
            }

        }
        }
        else{
            for (int i=1; i<=y ; i+=2)
        {
            other=y-i;
            if(i*a +((other*b)/2) < sum)
            {
                sum = i*a+((other*b)/2) ;
            }

        }
        }
        printf("%d \n", sum);
    }
    */

    int t;
            char s[5];
        int ac=0,bc=0;
    scanf("%d", &t);
    while(t>0)
    {
        t--;

        for(int i=0; i<5; i++)
        {
            scanf("%d", &s[i]);
            if (s== 'A')
            {
                ac+=1;
            }
            else{
                bc+=1;
            }
        }
        }

        if (ac>bc)
        {
            printf("A \n");
        }
        else{
            printf("B \n");
        }
    }

