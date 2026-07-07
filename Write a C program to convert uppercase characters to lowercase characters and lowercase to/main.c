//task-14
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter something:");
    scanf ("%c",&ch);
    if (ch>='A' && ch<= 'z'){
    printf ("%c",ch + 32); }
    else if (ch>='a' && ch<='z')
    {printf("%c",ch - 32);}
    else {
        printf("Not an Alphabet");}
    return 0;
}
