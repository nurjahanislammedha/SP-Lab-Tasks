/*If a five-digit number is input through the keyboard, write a program to print a new number
by adding one to each of its digits. For example, if the number that is input is 12391 then the
output should be displayed as 23502*/

#include<stdio.h>
int main()
{
    int number,sum;

    printf("Enter Five digit number = ");
    scanf("%d",&number);

    sum =(number + 11111);

    printf("New number = %d",sum);

    return 0;
}
