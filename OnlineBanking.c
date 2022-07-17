#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct user{
    char phone[50];
    char ac[50];
    char password[50];
    float balance;
};

int main()
{
    struct user usr, usr1;
    FILE *fp;
    char filename[50], phone[50], pword[50];
    int opt, choice;
    char cont ='y';
    float amount;
    printf("\nwhat do you want to do?");
    printf("\n\nRegister an Account ->[1]");
    printf("\nLogin into Account  ->[2]");
    printf("\n\nYour Choice: \t");
    scanf("%d",&opt);
    if (opt == 1)
    {
        system("cls");
        printf("Enter your Account Number:  ");
        scanf("%s",&usr.ac);
        printf("Enter your Phone Number:    ");
        scanf("%s",&usr.phone);
        printf("Enter your New Password:    ");
        scanf("%s",&usr.password);
        usr.balance = 0;
        strcpy(filename, usr.phone);
        fp = fopen(strcat(filename,".dat"), "w");
        fwrite(&usr,sizeof(struct user),1 ,fp);
        if (fwrite != 0)
        {
            printf("\nAccount successfully created!!");
        }
        else{
            printf("Something went wrong");
        }
        fclose(fp);
    }
    if (opt == 2)
    {
        system("cls");
        printf("\n Phone Number:\t");
        scanf("%s",&phone);
        printf("\n Password:\t");
        strcpy(filename, phone);
        scanf("%s",&pword);
        fp = fopen(strcat(filename,".dat"),"r");
        if (fp == NULL)
        {
            printf("\nAccount not registered!!");
        }
        else{
        fread(&usr,sizeof(struct user),1,fp);
        fclose(fp);
        if(!strcmp(pword, usr.password))
        {
            while(cont == 'y')
            {
                system("cls");
                printf("\n\t\tWelcome  %s\n",usr.phone);
                printf("\nCheck balance       ->[1]");
                printf("\nTo deposit amount   ->[2]");
                printf("\nCash Withdraw       ->[3]");
                printf("\nFor Online Transfer ->[4]");
                printf("\nChange the password ->[5]");
                printf("\n\nYour choice: ");
                scanf("%d",&choice);

                switch(choice)
                {
                    case 1: printf("\nYour Current Balance is Rs. %.2f", usr.balance);  
                            break; 
                    case 2: printf("\nEnter the amount: ");
                            scanf("%f",&amount);
                            usr.balance += amount;
                            fp = fopen(filename,"w");
                            fwrite(&usr, sizeof(struct user), 1 ,fp);
                            if (fwrite != NULL) printf("\nSuccesfully Deposited");
                            fclose(fp);
                            break;
                    case 3: printf("\nEnter the amount: ");
                            scanf("%f",&amount);
                            usr.balance -= amount;
                            fp = fopen(filename,"w");
                            fwrite(&usr, sizeof(struct user), 1 ,fp);
                            if (fwrite != NULL) printf("\nSuccesfully Withdrawn Rs. %.2f", amount);
                            fclose(fp);
                            break;
                    case 4: printf("\nPlease enter your phone number to transfer the balance:");
                            scanf("%s",&phone);
                            printf("\n Please enter the amount to transfer: ");
                            scanf("%f",&amount);
                            strcpy(filename,phone);
                            fp = fopen(strcat(filename,".dat"),"r");
                            if (fp == NULL) printf("\nAccount not registered");
                            else{
                                fread(&usr1,sizeof(struct user),1,fp);
                            fclose(fp);
                            if (amount>usr.balance) printf("\nInsufficient balance");
                            else{
                        
                            usr1.balance += amount;
                            fp =fopen(filename,"w");
                            fwrite(&usr1,sizeof(struct user),1,fp);
                            fclose(fp);
                            if (fwrite != NULL)
                            {
                            printf("\nYou have successfully transferred Rs. %.2f to %s", amount, phone);
                            strcpy(filename,usr.phone);
                            fp = fopen(strcat(filename, ".dat"), "w");
                            usr.balance -= amount;
                            fwrite(&usr,sizeof(struct user),1,fp);
                            fclose(fp);
                            }
                            }
                            break;
                    case 5: printf("\n Please enter new password: ");
                            scanf("%s",&pword);
                            fp = fopen(filename,"w");
                            strcpy(usr.password,pword);
                            fwrite(&usr,sizeof(struct user), 1, fp);
                            if (fwrite != NULL)
                            {
                            printf("\nPassword successfully changed");
                            }
                            break;
                    default: printf("\nInvalid input");
                    }
                    
                }
                printf("\nDo you want to continue transactions? [y/n]\t");
                scanf("%s",&cont);
            }
        }
        else
        {
            printf("Invalid password");
        }
        }
    }
    return 0;
}