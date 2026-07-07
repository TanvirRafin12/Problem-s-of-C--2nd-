//task-5
//conditional statement
#include <stdio.h>
#include <stdlib.h>
/* syntax for 'if'
  if (expession) {
    body
  }
  */

int main()
{
    int n;
    printf("Enter a number:");
    scanf ("%d",&n);
    if (n%3==0 && n%5==0 && n%7!=0)
    printf("The number is divisible by 3 and 5 but not by 7.");
    else
         printf("Condition not satisfied.");
    return 0;
}
