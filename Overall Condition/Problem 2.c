/*Problem 2: We know there are four quadrants named 1st, 2nd, 3rd and 4th quadrant.
Your task is to write a c program that can take input of the values of X &amp; Y Coordinates.
Now your program should output in which quadrant inputted coordinates lies.*/

#include<stdio.h>
int main()
{
    float x,y;

    printf("Enter number of X coordinate point = ");
    scanf("%f",&x);

    printf("Enter number of Y coordinate point = ");
    scanf("%f",&y);

    if(x>0 && y>0){
        printf("\nInputted coordinate lies in 1st Quadrant\n");
    }else if(x<0 && y>0){
        printf("\nInputted coordinate lies in 2nd Quadrant\n");
    }else if(x<0 && y<0){
        printf("\nInputted coordinate lies in 3rd Quadrant\n");
    }else if(x>0 && y<0){
        printf("\nInputted coordinate lies in 4th Quadrant\n");
    }else{
        printf("\nInvalid!\n");
    }


    return 0;
}
