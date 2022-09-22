/*How much does he made profit or incurred loss and whether the seller made profit or loss*/
/* Author : Nurjahan Islam Medha*/

#include<stdio.h>
int main ()
{
    float sp, cp;

    printf("Enter Selling price = ");
    scanf("%f",&sp);

    printf("Enter cost price = ");
    scanf("%f",&cp);

    if(sp>cp){
        printf("The seller has made profit = %.2f",sp-cp);
    }else{
        printf("The seller has incurred loss = %.2f",cp-sp);
    }
    return 0;
}
