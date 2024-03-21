#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n=1,c=0;
    int arr[100];
    arr[0]=2;
    for (i=2;i<201;i++)
    {
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            {
                break;
            }
            if (j==i-1)
            {
                arr[n]=i;
                n++;
            }

        }
    }
        for (int k=0 ; k<n ; k++)
    {
      printf(" %d", arr[k]);
      c++;
      if (c%20==0)
      {
          printf("\n");
      }

    }

    int d;
    d=10;
    int p = 98;
    float s= p/d;
    printf(" \n %f", s);
}
