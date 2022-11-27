/*Write a C program that can convert temperature from degree celcius to farenheit and
farenheit to celcius.
Author: Nurjahan Islam Medha
*/

#include<stdio.h>
int main()
{
    int choice;
    float c,f;
    printf("1. Celcius to Farenheit\n2. Farenheit to Celcious\nPlease enter your choice:");
    scanf("%d",&choice);

    if(choice==1){
        printf("\ntemparature in celcius:");
        scanf("%f",&c);
        printf("\n%.2f Celcius to% .2f farenheit",c,(c*1.8)+32);
    }else if(choice==2){
        printf("\ntemparature in farenheit:");
        scanf("%f",&f);
        printf("\n%.2f Farenheit to %.2f cecius",f,(f-32)*0.555);
    }else{
        printf("\nINVALID!\n");
    }

    return 0;
}
