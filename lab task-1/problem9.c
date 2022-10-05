/*four digit number is input, obtain the sum of first and last digit number (9)*/
/*Author: Nurjahan Islam Medha */

#include<stdio.h>
int main()
{
    int number ,a ,b ,c ,d ,sum;

    printf("Enter number = ");
    scanf("%d", &number);

    d = number % 10;
    a = number / 1000;

    printf("The sum of First number and Last number %d",sum = d+a);

    return 0;
}
