// Write a C program to input week number and print week day.

#include<stdio.h>
int main()
{
    int wn;

    printf("Enter week number = ");
    scanf("%d",&wn);

    if(wn == 1){
        printf("Monday");
    }else if(wn == 2){
        printf("Tuesday");
    }else if(wn == 3){
        printf("Wednesday");
    }else if(wn == 4){
        printf("Thursday");
    }else if(wn == 5){
        printf("Friday");
    }else if(wn == 6){
        printf("Saturday");
    }else if(wn == 7){
        printf("Sunday");
    }else{
        printf("Invalid week number!");
    }

    return 0;
}
