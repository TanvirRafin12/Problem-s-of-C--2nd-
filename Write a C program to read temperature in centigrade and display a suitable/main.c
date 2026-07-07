//task-16
//condition statement
#include <stdio.h>
#include <stdlib.h>
/* syntax for 'if'
if (expession){
    body
}
*/
int main() {
    int t;
    printf("Enter the temperature");
    scanf("%d",&t);
    if(t<0)
    printf("Freezing");
    else if(t<=10)
    printf("Very Cold");
    else if(t<=20)
    printf("Cold weather");
    else if(t<=30)
    printf("Normal");
    else if(t<=40)
    printf("Hot");
    else
    printf("Very Hot");
    return 0;
}
