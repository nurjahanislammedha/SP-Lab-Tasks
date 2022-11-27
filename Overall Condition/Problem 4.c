//Simple calculator

#include<stdio.h>
int main()
{
    int choice;
    float n1, n2;


    printf("Enter the first number: ");
    scanf("%f",&n1);


    printf("Enter the second number: ");
    scanf("%f",&n2);

    printf("\nWhat do you want to do with the inputted numbers?\n");
    printf("1. Calculate the summation \n2. Calculate the subtraction \n3. Calculate the multiplication \n4. Calculate the division \n\nEnter your choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("\nThe summation of %.2f and %.2f is= %.2f\n",n1,n2,n1+n2);
    }
    else if(choice==2)
    {
        printf("\nThe summation of %.2f and %.2f is= %.2f\n",n1,n2,n1-n2);
    }
    else if(choice==3)
    {
        printf("\nThe summation of %.2f and %.2f is= %.2f\n",n1,n2,n1*n2);
    }
    else if(choice==4)
    {
        printf("\nThe summation of %.2f and %.2f is= %.2f\n",n1,n2,n1/n2);
    }
    else
    {
        printf("\nInvalid!\n");
    }

    return 0;
}
