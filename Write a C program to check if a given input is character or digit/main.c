//task-12
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter something");
    scanf("%c",& ch);
    if (ch >= '0' && ch <= '9')
    printf ("it's Digit");
    else if ((ch >= 'A' && ch <= 'Z' ) || (ch >= 'a' && ch <= 'z'))
    printf("it's Character");
    else
        printf("Other");
    return 0;
}
