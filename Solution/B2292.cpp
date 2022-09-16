#include <stdio.h>
int main(void)
{
 int i, n, cnt = 1, temp = 1;

 scanf("%d", &n);

 if (n == 1)
  cnt = 1;
 else {
  for (i = 2; i <= n; i++)
  {
   if (temp + (cnt-1) * 6 < i)
   {
    cnt++;
    temp = i - 1;
   }
  }
 }

 printf("%d\n", cnt);
}