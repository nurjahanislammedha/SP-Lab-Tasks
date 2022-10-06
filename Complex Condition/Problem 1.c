/*Write a C program that can take input a number and then decide whether the number is
positive, negative or neutral.*/

#include<stdio.h>
int main ()
{
    float n;

    printf("Enter number = ");
    scanf("%f",&n);

    if(n>0){
        printf("Positive");
    }else if(n<0){
        printf("Negative");
    }else if(n==0){
        printf("Neutral");
    }else {
        printf("Invalid");
    }

    return 0;
}
