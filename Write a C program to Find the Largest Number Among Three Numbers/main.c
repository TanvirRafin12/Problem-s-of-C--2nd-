//task-4
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
    int x= 10;
    int y= 20;
    int z= 30;
    if (y>x && y>z)
    printf("y is lergest");
    else if (x>y && x>z)
    printf ("x is lergest");
    else if (z>x && z>y)
    printf (" z is lergest");
    return 0;
}
