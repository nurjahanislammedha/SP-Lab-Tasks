/*reverse five digit number that enter through keyboard*/

#include<stdio.h>
int main()
{
    int number = 12345, rev = 0, sum;

    printf ("Initial value = ");
    scanf("%d", &number);

    sum = number % 10;
    rev = rev *10 + sum;
    number = number / 10;

    sum = number % 10;
    rev = rev *10 + sum;
    number = number / 10;

    sum = number % 10;
    rev = rev *10 + sum;
    number = number / 10;

    sum = number % 10;
    rev = rev *10 + sum;
    number = number / 10;

    sum = number % 10;
    rev = rev *10 + sum;
    number = number / 10;

    printf("\nReverse value = %d", rev);

    return 0;
}
