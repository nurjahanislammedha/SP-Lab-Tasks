/*A cashier has currency notes of denominations 10, 50 and 100. If the amount to be
withdrawn is input through the keyboard in hundreds, find the total number of currency notes of
each denomination the cashier will have to give to the with-drawer.*/

#include<stdio.h>
int main()
{
    int num, note10, note50, note100, sum;

    printf("Enter number of  withdrawn note = ");
    scanf("%d", &num);

    note100 = (num / 100);


    printf("\nThe with-drawer will get 100 of  = %d",note100);

    note50 = (note100 % 50);

    printf("\nThe with-drawer will get 50 of = %d",note50);

    note10 = (note10 % 10);

    printf("\nThe with-drawer will get 10 of = %d",note10);


    return 0;
}
