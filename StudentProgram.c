#include <stdio.h>
#include <stdlib.h>

struct Students
{
    char fname[20];
    char lname[20];
    int rollNo;
    int marks[5];
};
void main()
{
    int n;
    printf("\n\t\t\t<<<<< Welcome to our School >>>>>\n");
    printf("\n\tEnter the No. of Students to update results: ");
    scanf("%d",&n);
    struct Students s1[n];
    int c, g[n];
    float sum[n];
    for (int j=0; j<n; j++)
    {
    printf("\n\n\tEnter the student's first name: ");
    scanf("%s",&s1[j].fname);
    printf("\n\tEnter the student's last name: ");
    scanf("%s",&s1[j].lname);
    printf("\n\tEnter the Roll No: ");
    scanf("%d",&s1[j].rollNo);
    printf("\n\tWhat's your Gender? Male ->[1] or Female ->[0] ");
    scanf("%d",&g[j]);
    printf("\n\t******This Program is built for maximum of 100 for each subject******\n");
    for (int i = 0; i < 5; i++)
    {
        printf("\n\tEnter the mark%d: ",i+1);
        scanf("%d",&s1[j].marks[i]);
    }
    printf("\t___________________________________________________");
    }
    printf("\n\tDo you want to display the details?  Yes ->[1] or No ->[0] ");
    scanf("%d",&c);
    printf("\t____________________________________________________________________\n");
    for (int k=0; k<n; k++)
    {
    if (c)
    {
        if (g[k] == 1)
        {
        printf("\n\n\tThe Student's Name is: Mr. %s %s",s1[k].fname, s1[k].lname);
        }
        else if (g[k] == 0)
        {
            printf("\n\n\tThe Student's Name is: Ms. %s %s", s1[k].fname, s1[k].lname);
        }
        else
        {
            printf("\n\n\tThe Student's Name is: %s %s",s1[k].fname ,s1[k].lname);
        }
        printf("\n\tThe Roll No is: %d\n",s1[k].rollNo);
        sum[k] = 0;
        for (int i = 0; i < 5; i++)
        {
            sum[k] +=s1[k].marks[i];
            switch(i)
            {
            case 0: if (s1[k].marks[i] >= 35){
                    printf("\n\tEnglish        :\t%d \t P",s1[k].marks[i]);
                    }
                    else
                    {
                    printf("\n\tEnglish        :\t%d \t F",s1[k].marks[i]);
                    }
                    break;
            case 1: if (s1[k].marks[i] >= 35)
                    {
                    printf("\n\tTamil          :\t%d \t P",s1[k].marks[i]);
                    }
                    else
                    {
                    printf("\n\tTamil          :\t%d \t F",s1[k].marks[i]);
                    }
                    break;
            case 2: if (s1[k].marks[i] >= 35){
                    printf("\n\tMaths          :\t%d \t P",s1[k].marks[i]);
                    }
                    else
                    {
                    printf("\n\tMaths          :\t%d \t F",s1[k].marks[i]);
                    }
                    break;
            case 3: if (s1[k].marks[i] >= 35){
                    printf("\n\tScience        :\t%d \t P",s1[k].marks[i]);
                    }
                    else
                    {
                    printf("\n\tScience        :\t%d \t F",s1[k].marks[i]);
                    }
                    break;
            case 4: if (s1[k].marks[i] >= 35){
                    printf("\n\tSocial Science :\t%d \t P",s1[k].marks[i]);
                    }
                    else
                    {
                    printf("\n\tSocial Science :\t%d \t F",s1[k].marks[i]);
                    }
                    break;
            default: printf("invalid");
            }
        }
        printf("\n\n\tThe Total is : %1.0f out of 500\n\tThe Average is : %1.2f out of 100", sum[k], (sum[k]/5));
        printf("\n___________________________________________________________________________________\n");
    }
    }
        printf("\n\n\t\tThanks for using our Program\n\n");
}
