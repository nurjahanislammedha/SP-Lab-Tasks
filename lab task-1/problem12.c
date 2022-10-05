/*If the total selling price of 15 items and the total profit earned on them is input through the
keyboard, write a program to find the cost price of one item*/

#include<stdio.h>
int main()
{
    float sp, p, cp;//sp = selling price  ,p = profit ,cp = cost price


    printf("Enter selling price =");
    scanf("%f", &sp);

    printf("Enter earned profit = ");
    scanf("%f", &p);

    cp = (sp - p)/15;

    printf("Cost price is = %.2f",cp);

    return 0;
}
