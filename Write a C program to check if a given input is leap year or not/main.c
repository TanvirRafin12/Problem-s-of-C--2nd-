//task-11
//conditional statement
#include <stdio.h>
#include <stdlib.h>
/* syntax for 'if'
 if  (expession) {
    body
 }
 */
int main()
{
    int y;
    printf("Enter a numner:");
    scanf ("%d",&y);
        if (y%4==0 && y%100!=0 || y%400==0)
    printf ("Leap Year");
         else
    printf("Not Leap Year");
    return 0;
}
