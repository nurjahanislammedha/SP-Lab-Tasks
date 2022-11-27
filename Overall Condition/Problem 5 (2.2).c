/*Assign a value to double variable cost depending on the value of integer variable
distance*/

#include<stdio.h>
int main()
{
    int distance;
    double cost;

    printf("Enter Distance= ");
    scanf("%d",&distance);

    if(distance>=0 && distance<=100)
    {
        printf("Cost= %.2lf",cost=5);
    }
    else if(distance>100 && distance<=500)
    {
        printf("Cost= %.2lf",cost=8);
    }
    else if(distance>500 && distance<=1000)
    {
        printf("Cost= %.2lf",cost=10);
    }
    else if(distance>=1000)
    {
        printf("Cost= %.2lf",cost=12);
    }
    else
    {
        printf("Invalid!");
    }

    return 0;
}
