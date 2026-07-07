//task-7
//conditionn statement
#include <stdio.h>
#include <stdlib.h>
/* syntex for 'if'{
  if (expations) {
    body
  }
  */

int main()
{
    int n;
    printf ("Enter a number");
    scanf("%d",&n);
    if (n%3 ==0 && n%7 == 0)
        {
    printf("d is divisible\n",n);
    } else
{
    printf("d is not divisible\n", n);
}
    return 0;
}
