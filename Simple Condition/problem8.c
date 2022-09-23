/*Write a C program to determine whether a given number is Zero (0) or not.
  Author : Nurjahan islam Medha*/

#include<stdio.h>
int main()
{
    float n;

    printf("Enter number = ");
    scanf("%f",&n);

    if(n==0){
        printf("The number is zero");
    }else{
        printf("The number is not zero");
    }

    return 0;
}
