#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 void main()
 {
    int item[6], a, j =0, q, burg =70, pizz =120, hdog =40, hchoco =60, icream =50, donut =45, amt[6], i =0, total =0;
    system("cls");
    time_t t;
    time(&t);
    printf("\t\t<<<< Welcome to Best Restaurant >>>>\n\n");
    printf("\tBurger             -> [1]\n");
    printf("\tPizza              -> [2]\n");
    printf("\tHot Dogs           -> [3]\n");
    printf("\tHot Chocolate      -> [4]\n");
    printf("\tVanilla Ice Cream  -> [5]\n");
    printf("\tDonuts             -> [6]\n");
    printf("______________________________________________\n\n");
    do
    {    
        printf("\n\tEnter the item%d: ",i+1);
        scanf("%d",&item[i]);
        switch(item[i])
        {
            case 1: printf("\tEnter the quantity: ");
                    scanf("%d",&q);
                    amt[i]=burg*q;
                    printf("\tThe amount is Rs. %d",amt[i]);
                    break;
            case 2: printf("\tEnter the quantity: ");
                    scanf("%d",&q);
                    amt[i]=pizz*q;
                    printf("\tThe amount is Rs. %d",amt[i]);
                    break;
            case 3: printf("\tEnter the quantity: ");
                    scanf("%d",&q);
                    amt[i]=hdog*q;
                    printf("\tThe amount is Rs. %d",amt[i]);
                    break;
            case 4: printf("\tEnter the quantity: ");
                    scanf("%d",&q);
                    amt[i]=hchoco*q;
                    printf("\tThe amount is Rs. %d",amt[i]);
                    break;
            case 5: printf("\tEnter the quantity: ");
                    scanf("%d",&q);
                    amt[i]=icream*q;
                    printf("\tThe amount is Rs. %d",amt[i]);
                    break;
            case 6: printf("\tEnter the quantity: ");
                    scanf("%d",&q);
                    amt[i]=donut*q;
                    printf("\tThe amount is Rs. %d",amt[i]);
                    break;
            default: printf("\tInvalid input");        
        }
        printf("\n\n\tDo you want to continue? Yes ->[1] or No ->[0] ");
        scanf("%d",&a);
        if(!a) break;
        i++;
    }while(i <= 6);
    system("cls");
    printf("\n\t\t<<<< Welcome to Best Restaurant >>>>\n\n");
    printf("\tDate & Time : %s\n",ctime(&t));
    do
    {
        total+=amt[j];
        switch(item[j])
        {
            case 1: printf("\tBurger            \t:  %d\n",amt[j]);
                    break;
            case 2: printf("\tPizza             \t:  %d\n",amt[j]);
                    break;
            case 3: printf("\tHot Dogs          \t:  %d\n",amt[j]);
                    break;
            case 4: printf("\tHot Chocolate     \t:  %d\n",amt[j]);
                    break;
            case 5: printf("\tVanilla Ice Cream \t:  %d\n",amt[j]);
                    break;
            case 6: printf("\tDonuts            \t:  %d\n",amt[j]);
                    break;
            default: ("invalid input");
        }
        j++;
    }while(j <= i);
    printf("\t_______________________________\n");
    printf("\tTotal             \t:  %d\n",total);
    printf("\n\t\t<<<< Thank You >>>>\n\n\n");
 }