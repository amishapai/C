#include <stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6};
    int i,j, temp;
    printf("Enter element");
/*    for (i=0 ; i<6 ; i++)
    {

      scanf("%d",&arr[i]);

    }*/
    for (i=0, j=4; i<2; i++)
    {
      temp = arr[i];
      arr[i]= arr[j];
      arr[j]=temp;
      j--;
    }
    for (i=0 ; i<6 ; i++)
    {
      printf("%d", arr[i]);

    }
}
