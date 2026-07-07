//task-15
//condition statement
#include <stdio.h>
#include <stdlib.h>
/* syntax for 'if'
if (expesion) {
    body
}
*/
int main()
{
    float m;
    printf("Enter the mark");
    scanf("%f",&m);
    if (m>=80 && m<=100){
        printf("A+ 4.00");
        printf("Excellent");}
    else if (m>=75 && m<=79){
        printf("A 3.75");
        printf("Very Good");}
        else if (m>=70 && m<=74){
        printf("A-,3.50");
        printf("Good plus");}
        else if (m>=65 && m<=69){
        printf("B+ 3.25");
        printf("Good");}
        else if (m>=60 && m<=64){
        printf("B 3.00");
        printf("Good Manus");}
        else if (m>=55 && m<=59){
        printf("B- 2.75");
        printf("Quite satifactory");}
        else if (m>=50 && m<=54){
        printf("C+ 2.50");
        printf("satifactory");}
        else if (m>=45 && m<=49){
        printf("C 2.25");
        printf("Barly satifactory");}
        else if (m>=40 && m<=44){
        printf("C+ 2.00");
        printf("Weak");}
        return 0;
}
