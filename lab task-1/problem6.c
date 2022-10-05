/*Interchanging location of two inputs*/

#include <stdio.h>
int main()
{
    int c, d, x;

    printf("Enter the value of C and D\n");
    scanf("%d %d", &c,&d);

    x = c;
    c = d;
    d = x;

    printf("Enter value of C is %d\nEnter value of D is %d\n", c,d);

    return 0;

}
