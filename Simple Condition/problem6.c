/*Write program to determine whether a number is positive or not.*/
#include<stdio.h>
int main()
{
    float n; //n=number

    printf("Enter number = ");
    scanf("%f",&n);

    if(n>0){
        printf("The number is positive");
    }else{
        printf("The number is not positive");
    }

    return 0;
}
