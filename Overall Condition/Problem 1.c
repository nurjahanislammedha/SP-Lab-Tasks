/*Your father know that you are good at programming, now he is asked you to
write a C program that can take input the age of your father, mother and uncle and your
program should output who is the oldest, who is youngest and whose age is between
oldest and youngest.*/

#include<stdio.h>
int main()
{
    int f,m,u;

    printf("Enter your father age = ");
    scanf("%d",&f);

    printf("Enter your mother age = ");
    scanf("%d",&m);

    printf("Enter your uncle age = ");
    scanf("%d",&u);

    if(f>m && m>u){
        printf("\nYour father is the oldest person \nYour mother's age is between oldest and youngest age \nYour uncle is the youngest person");
    }else if(f>u && u>m){
        printf("\nYour father is the oldest person \nYour uncle's age is between oldest and youngest age \nYour mother is the youngest person");
    }else if(m>f && f>u){
        printf("\nYour mother is the oldest person \nYour father's age is between oldest and youngest age \nYour uncle is the youngest person");
    }else if(m>u && u>f){
        printf("\nYour mother is the oldest person \nYour uncle's age is between oldest and youngest age \nYour father is the youngest person");
    }else if(u>m && m>f){
        printf("\nYour uncle is the oldest person \nYour mother's age is between oldest and youngest age \nYour father is the youngest person");
    }else if(u>f && f>m){
        printf("\nYour uncle is the oldest person \nYour father's age is between oldest and youngest age \nYour mother is the youngest person");
    }else{
        printf("\nInvalid!");
    }

    return 0;
}
