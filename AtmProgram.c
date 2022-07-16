#include <stdio.h>
#include <stdlib.h>

void main()
{
    int pin, choice, amount, withdraw, balance = 0, forgot = 1, getout;
    printf("\n\n\t\t\t<<<<<<<< Welcome to Best Bank of India >>>>>>>>\n\n");
    do
    {
    printf("\n\tenter your PIN: ");
    scanf("%d",&pin);
    if (forgot >= 3)
    {
        printf("\n\tForgot PIN!!!\n\tDo you want to quit? Yes ->[1] or No ->[0] ");
        scanf("%d",&getout);
        forgot = 0;
        if (getout)
        {
            printf("\n\n\t\t   <<<<< Thanks for using our ATM >>>>>\n\n");
            exit(0);
        }
    }
    for (int i = 1 ; i == 1; )
        if (pin == 4321)
        {
            printf("\n\n\tenter 1 for Deposit\n\tenter 2 for Balance Inquiry\n\tenter 3 for Withdrawal\n\tenter 4 for Exit\n\n");
            printf("\tenter your choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1: printf("\tenter the amount to deposit: ");
                        scanf("%d",&amount);
                        balance+=amount;
                        printf("\tYour amount is deposited!! and your balance is: Rs. %d", balance);
                        break;
                case 2: printf("\tYour current savings Balance is Rs. %d", balance);
                        break;
                case 3: printf("\tenter the amount to withdrawal: ");
                        scanf("%d",&withdraw);
                        if (withdraw <= balance)
                        {
                            balance-=withdraw;
                            printf("\tYour amount is withdrawn!! and your balance is: Rs. %d", balance);
                        }
                        else
                        {
                            printf("\tYour account has insufficient amount!!! and you have Rs. %d", balance);
                        }
                        break;
                case 4: printf("\n\n\t\t   <<<<< Thanks for using our ATM >>>>>\n\n");
                        exit(0);
                default: printf("\tInvalid Input!!! Try Again.");
            }
            printf("\n\t_________________________________________________________________\n");
            printf("\n\tDo you want to make transactions? Yes ->[1] or No ->[0] ");
            scanf("%d",&i);
            if (i == 0)
            {
                printf("\n\n\t\t   <<<<< Thanks for using our ATM >>>>>\n\n");
                exit(0);
            }
        }
        else
        {
            printf("\n\tIncorrect PIN. Try Again!!!\n");
            forgot++;
            break;
        }
    }while(1);
}
