/*If a five-digit number is input through the keyboard, write a program to print a new number
by adding one to each of its digits. For example, if the number that is input is 12391 then the
output should be displayed as 23502*/

#include<stdio.h>
int main()
{
    int number,a,b,c,d,e,sum,rev;

    printf("Enter number = ");
    scanf("%d",&number);

     rev = number % 10;
     number = number / 10;
     a = rev+1;

     printf("\nSingle number = %d",a);
     printf("\nValue = %d",number);

     rev = number % 10;
     number = number / 10;
     b = rev+1;

     printf("\nSingle number = %d",b);
     printf("\nValue = %d",number);

     rev = number % 10;
     number = number / 10;
     c = rev+1;

     printf("\nSingle number = %d",c);
     printf("\nValue = %d",number);

     rev = number % 10;
     number = number / 10;
     d = rev+1;

     printf("\nSingle number = %d",d);
     printf("\nValue = %d",number);

     rev = number % 10;
     number = number / 1;
     e = rev+1;

     printf("\nSingle number = %d",e);
     printf("\nValue = %d",number);

     sum = e;
     sum = (sum * 10) + d;

     sum = d;
     sum = (sum * 100) + c;

     sum = c;
     sum = (sum * 1000) + b;

     sum = b;
     sum = (sum * 10000) + a;

     sum = (e*10000+d*1000+c*100+b*10+a*1);

     printf("\nNew number =%d",sum);

    return 0;
}
