/* calculate the sum of five digit number that enter through keyboard*/
/* rem = 12345 % 10 = 1234.5 = 5 = 0 + 5*/
/* sum = 1234 / 10 = 123.4 = 4 = 4 + 5*/

#include <stdio.h>
 int main ()
 {
     int number,sum=0,rem;
     printf("Enter number = ");
     scanf("%d", &number);

     rem = number % 10;
     sum = sum + rem;
     number = number / 10;

     rem = number % 10;
     sum = sum + rem;
     number = number / 10;

     rem = number % 10;
     sum = sum + rem;
     number = number / 10;

     rem = number % 10;
     sum = sum + rem;
     number = number / 10;

     rem = number % 10;
     sum = sum + rem;
     number = number / 10;

     printf("\nSum is %d",sum);
     return 0;

 }

