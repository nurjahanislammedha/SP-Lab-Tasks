/*Integer number is input. Find if the number is odd or even*/
/*Author: Nurjahan Islam medha*/

#include<stdio.h>
int main()
{
    int n;

    printf("Enter number = ");
    scanf("%d",&n);

    if(n%2==0){
            printf("The number is even");
    }else{
            printf("The number is odd");
    }

    return 0;
}
