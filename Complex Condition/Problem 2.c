/*Write a c program to display a menu in a restaurant and input user choice.*/

#include<stdio.h>
int main()
{
    printf("Restaurant Menu Card\n");

    int choice;

    printf("\n1.Salad",choice);
    printf("\n2.Thai soup",choice);
    printf("\n3.Wonthon",choice);
    printf("\n4.Baked Pasta",choice);
    printf("\n5.Mexican Sub\n",choice);

    printf("\nEnter your choice = ");
    scanf("%d",&choice);


    if(choice==1){
        printf("\nYou have ordered Salad ");
    }else if(choice==2){
        printf("\nYou have ordered Thai soup");
    }else if(choice==3){
        printf("\nYou have ordered Wonthon");
    }else if(choice==4){
        printf("\nYou have ordered Baked Pasta");
    }else if (choice==5){
        printf("\nYou have ordered Maxican Sub");
    }else {
        printf("\nNot available");
    }

    return 0;
}
