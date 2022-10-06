/*Write a C program to input basic salary of an employee and calculate its Gross salary
according to following:
 Basic Salary <= 10000 : HRA = 20%, DA = 80%
 Basic Salary <= 20000 : HRA = 25%, DA = 90%
 Basic Salary > 20000 : HRA = 30%, DA = 95%*/

#include<stdio.h>
int main()
{
    float bs,hra,da,gs;//bs=basic salary , hra=HRA, da=DA, gs=gross salary

    printf("Basic Salary = ");
    scanf("%f",&bs);

    if(bs <= 10000){
        hra=0.2*bs;
        da=0.8*bs;
        gs=bs+hra+da;
        printf("Gross salary = %.2f",gs);
    }else if(bs <= 20000){
        hra=0.25*bs;
        da=0.9*bs;
        gs=bs+hra+da;
        printf("Gross salary = %.2f",gs);
    }else if(bs > 20000){
        hra=0.3*bs;
        da=0.95*bs;
        gs=bs+hra+da;
        printf("Gross salary = %.2f",gs);
    }else{
        printf("Invalid");
        }


    return 0;
}
