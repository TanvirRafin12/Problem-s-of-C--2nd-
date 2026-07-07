//task13
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c,d,rev;
    printf("Enter a 4-digit number:");
    scanf("%d",&n);
    a=n/1000;
    b=(n/100)%10;
    c=(n/10)%10;
    d=n%10;
    rev=d*1000+c*100+b*10+a;
    if(n==rev)
    printf("palindrome\n");
    else
    printf("Not palindrome\n");
    return 0;
}
