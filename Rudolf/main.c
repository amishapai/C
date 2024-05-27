#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test,k;
    scanf("%d", &test);
    for (k=0; k<test; k++)
    {
    int left,right, sum;
    scanf("%d%d%d", &left,&right,&sum);
    int larr[left];
    int rarr[right];
    int i,j,count=0;
    for (i=0; i<left; i++)
    {
        scanf("%d", &larr[i]);
    }
    for (i=0; i<right; i++)
    {
        scanf("%d", &rarr[i]);
    }
    for (i=0; i<left ; i++)
    {
        for (j=0; j<right; j++)
        {
            if (larr[i]+rarr[j]<=sum)
            {
                count++;
            }
        }
    }
    printf("%d\n", count);
    }
}
