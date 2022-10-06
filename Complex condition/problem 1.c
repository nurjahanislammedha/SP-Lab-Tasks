/*Write a C program that can take input a number and then decide whether the number is
positive, negative or neutral.*/

#include<stdio.h>
int main()
{
    float num;

    printf("Enter number = ");
    scanf("%f",&num);

    if(num > 0){
        printf("The number is positive");
    }else if (num < 0) {
        printf("The number is negative");
    }else {
        printf("The number is neutral");
    }

    return 0;
}
