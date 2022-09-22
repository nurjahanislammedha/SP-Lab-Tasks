/*Arif and Joy's age is input. Write a program to calculate who is the youngest one*/

#include<stdio.h>
int main()
{
    int a;
    int j;

    printf("Enter Arif's age = ");
    scanf("%d",&a);

    printf("Enter Joy's age = ");
    scanf("%d",&j);

    if(a>j){
        printf("joy is youngest");
    }else{
        printf("Arif is youngest");
    }

    return 0;
}
