#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    int choice;
    do{
    printf("\nenter the 1st number: ");
    scanf("%f",&a);
    printf("enter the 2nd number: ");
    scanf("%f",&b);
    choiceList();
    printf("\nenter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("the sum is: %f\n", a+b);
                break;
        case 2: printf("the difference is: %f\n", a-b);
                break;
        case 3: printf("the product is: %f\n", a*b);
                break;
        case 4: printf("the quotient is: %f\n", a/b);
                break;
        case 5: exit(0);
        default: printf("invalid input\n");
    }
    printf("_______________________________________\n");
    }while(1);
    return 0;
}
void choiceList()
{
    printf("\nenter 1 for addition");
    printf("\nenter 2 for subraction");
    printf("\nenter 3 for multiplication");
    printf("\nenter 4 for division");
    printf("\nenter 5 for exit\n");

}
