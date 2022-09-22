/*Write a program to check whether a triangle is valid or not, when the three angles of the
triangle are entered through the keyboard. A triangle is valid if the sum of all the three angles is
equal to 180 degrees.*/

#include <stdio.h>
int main()
{
    float a,b,c,sum;

    printf("Enter angle 1 : ");
    scanf("%f", &a);

    printf("Enter angle 2 : ");
    scanf("%f",&b);

    printf("Enter angle 3 : ");
    scanf("%f", &c);

    sum = a+b+c ;

    if(sum == 180){
        printf("Triangle is valid ");
    }else{
        printf("Triangle is not valid");
    }

    return 0;
}
