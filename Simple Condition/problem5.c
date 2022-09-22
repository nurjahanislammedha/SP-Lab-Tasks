/*Write a program to check if the area of the triangle is greater than the perimeter of the triangle.*/

#include<stdio.h>
int main()
{
    float area, perimeter, hight, a, b, c;

    printf("Enter angle 1 = ");
    scanf("%f",&a);

    printf("Enter angle 2 = ");
    scanf("%f",&b);

    printf("Enter angle 3 = ");
    scanf("%f",&c);

    printf("Enter Hight = ");
    scanf("%f, &hight");

    area = ((hight*b)/2);
    perimeter = a+b+c;

    if(area>perimeter){
        printf("The area is greater than perimeter");
    }else{
        printf("The perimeter  is greater than area");
    }

    return 0;
}
