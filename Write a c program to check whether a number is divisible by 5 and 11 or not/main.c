// task-6
//condition statement
#include <stdio.h>
#include <stdlib.h>
/* syntax for 'if'
if (expesion){
    body
}
*/
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    if (n%5 == 0 && n%11 == 0)
    {
    printf("d is divisible\n",n);
    } else
    {
         printf("d is not divissible\n",n);
    }
        return 0;
}
