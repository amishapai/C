#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int t;
  scanf("%d", &t);
  int x1,y1,x2,y2,x3,y3,x4,y4;
  long area, l;
  while (t>0)
  {
      t--;
      scanf("%d%d", &x1, &y1);
      scanf("%d%d", &x2, &y2);
      scanf("%d%d", &x3, &y3);
      scanf("%d%d", &x4, &y4);
      if (x1==x2)
      {
             area = (abs(y2-y1))*(abs(y2-y1));
      }
      else if (x1==x3)
      {
          area = (abs(y3-y1))*(abs(y3-y1));
      }
      else
      {
          area = (abs(y4-y1))*(abs(y4-y1));
      }
      printf("%ld \n", area);
  }
}
