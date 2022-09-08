///converting fahrenheit temperature to centigrade degree ///

#include <stdio.h>
int main()
{
    float f;
    float c;

    printf("Enter Fahrenheit Temperature = ");
    scanf("%f", &f);

    c = f-32;
    printf("Enter centigrade Temperature is %.2f",c);

    return 0;
}
