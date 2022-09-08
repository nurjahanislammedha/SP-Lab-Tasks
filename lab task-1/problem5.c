/*students mark in five different subjects*/

#include<stdio.h>
int main ()
{
    float subjectOne;
    float subjectTwo;
    float subjectThree;
    float subjectFour;
    float subjectFive;
    float aggregateMark;
    float percantage;

    printf("Enter the number of subject one: ");
    scanf("%f", &subjectOne);

     printf("Enter the number of subject Two: ");
    scanf("%f", &subjectTwo);

     printf("Enter the number of subject Three: ");
    scanf("%f", &subjectThree);

     printf("Enter the number of subject Four: ");
    scanf("%f", &subjectFour);

     printf("Enter the number of subject Five: ");
    scanf("%f", &subjectFive);

    aggregateMark = subjectOne+subjectTwo+subjectThree+subjectFour+subjectFive;
    percantage = aggregateMark / 5;

    printf("Enter total mark:%.2f",aggregateMark);
    printf("\nPercentage mark: %.2f",percantage);

    return 0;

}
