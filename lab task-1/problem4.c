#include <stdio.h>
int main()
{
    float distance;
    float meter;
    float feet;
    float inches;
    float centimeters;

    printf ("Enter the distance between Mirpu and Ashulia = ");
    scanf ("%f", &distance);

    meter= 1000*distance;
    feet= 3000*distance;
    inches= 3300*distance;
    centimeters= 4300*distance;

    printf ("Distance in meter= %.2f\n",meter);
    printf ("Distance in feet= %.2f\n",feet);
    printf ("Distance in inches= %.2f\n",inches);
    printf ("Distance in centimters= %.2f\n",centimeters);


    return 0;
}
