//task-8
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
    char c;
    printf("Enter  a character:");
    scanf ("%d",&c);
    if (c=='+' || c=='-' ||c=='*' || c== '/'|| c=='%')
    {
        printf ("operator/n");
    } else {
    printf("not a operator,/n");
    }
    return 0;
}
