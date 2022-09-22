///converting fahrenheit temperature to centigrade degree ///

#include <stdio.h>
int main()
{
    float f;
    float c;

    printf("Enter Fahrenheit Temperature = ");
    scanf("%f", &f);

    c = ((f-32)*5/9);
    printf("Centigrade Temperature=%.2f",c);

    return 0;
}
