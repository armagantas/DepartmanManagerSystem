#include <stdio.h>
#include <stdlib.h>
#define jeanPrice 75
#define tshirtPrice 50
int main()
{
    int jeanValue = 0;
    int tshirtValue = 0;
    int jean;
    int tshirt;
    int choose;
    int choose1;
    int choose2;
    int total = 0;
    do{
    printf("*******Welcome The Management System*******\n");
    printf("1-Add Item\n");
    printf("2-Delete Item\n");
    printf("3-Show the Items\n");
    printf("4-Calculate The Average\n");
    printf("5-Exit The Program\n");
    scanf("%d",&choose);
       switch(choose){
case 1:

    printf("Which product do you want to add?\n");
    printf("1-Jean\n");
    printf("2-T-shirt\n");
    scanf("%d",&choose1);
    if(choose1 == 1){
            printf("How many product do you want to add?");
            scanf("%d",&jean);
        jeanValue += jean;
    }
    else if(choose1 == 2){
        printf("How many product do you want to add?");
            scanf("%d",&tshirt);
            tshirtValue += tshirt;
    }
    else{
        printf("Please add a valid value!");
    }
    break;
case 2:

    printf("Which product do you want to delete\n");
    printf("1-Jean\n");
    printf("2-T-shirt\n");
    scanf("%d",&choose2);
    if(choose2 == 1){
            printf("How many product do you want to delete?");
            scanf("%d",&jean);
        jeanValue -= jean;
    }
    else if(choose2 == 2){
        printf("How many product do you want to delete?");
            scanf("%d",&tshirt);
            tshirtValue -= tshirt;
    }
    else{
        printf("Please add a valid value!");
    }
    break;
case 3:

    printf("Jean Item Number : %d\n",jeanValue);
    printf("Tshirt Item Number : %d\n",tshirtValue);
    break;
case 4:

    total = jeanPrice*jeanValue + tshirtPrice*tshirtValue;
    printf("Your Total Price: %d",total);
case 5:

    printf("Exiting...");
    break;
default:
    printf("Please Enter A Valid Value!");
    break;
    }
    }while(choose != 5);
    return 0;
}






