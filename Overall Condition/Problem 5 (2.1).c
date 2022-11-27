/*2.1 Take an integer variable named currentNumber. If integer variable
currentNumber is odd, change its value so that it is now 3 times currentNumber
plus 1, otherwise change its value so that it is now half of currentNumber
(rounded down when currentNumber is odd).*/

#include<stdio.h>
int main()
{
    int currentNumber;

    printf("Enter number= ");
    scanf("%d",&currentNumber);

    if((currentNumber%2)!= 0)
    {
        printf("The number is= %d",currentNumber/2);
    }
    else
    {
        printf("The number is= %d",currentNumber*3+1);
    }

    return 0;
}
