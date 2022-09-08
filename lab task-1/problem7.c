/*calculate the area and perimeter of a rectangle as well as the area and circumference of the circle*/

#include <stdio.h>
#include<math.h>

int main ()
{
    float l;
    float b;
    float r;
    float areaR;
    float areaC;
    float perimeter;
    float circumference;

    printf("Enter Length of a rectangle = ");
    scanf("%f", &l);

    printf("Enter Breadth of a rectangle = ");
    scanf("%f", &b);


    printf("Enter radius of a circle = ");
    scanf("%f", &r);

    areaR = l*b;
    perimeter = 2*(l+b);
    areaC = M_PI * r* r;/*Pi= 3.14.6*/
    circumference = 2 * M_PI * r;

    printf("\nArea of Rectangle is %.2f\n",areaR);
    printf("Perimeter of Rectangle is %.2f\n",perimeter);
    printf("Area of Circle is %.2f\n",areaC);
    printf("Circumference of Circle is %.2f\n",circumference);

    return 0;
}
