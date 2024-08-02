#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
#include"school.h"


int c=0;
int string_compare(char*str1,char*str2)
{
    int i;
    for (i=0; str1[i]||str2[i]; i++)
    {
        if (str1[i]>='a'&&str1[i]<='z')
        {
            str1[i]=str1[i]-'a'+'A';
        }
        if (str2[i]>='a'&&str2[i]<='z')
        {
            str2[i]=str2[i]-'a'+'A';
        }
        if (str1[i]>str2[i])
        {
            return 1 ;
        }
        else if (str1[i]<str2[i])
        {
            return 0;
        }
    }
    return -1;
}
int string_length(char*str)
{
    int i;
    for (i=0; str[i]; i++);
    return i;
}

void string_scan(char *str,int size)
{
    int x=0;
    scanf(" %c",&str[x]);
    if (str[x]>='a'&&str[x]<='z')
    {
        str[x]=str[x]-'a'+'A';
    }
    for(; str[x]!='\n'&&x<size-1;)
    {
        x++;
        scanf("%c",&str[x]);
        if (str[x]>='a'&&str[x]<='z')
        {
            str[x]=str[x]-'a'+'A';
        }
    }
    str[x]=0;
}
void string_scan_temp(char *temp,int size1,char *str2,int size2)
{
    int i;
    for (i=0; i<size2-1; i++)
    {
        temp[i]=str2[i];
    }

}

void string_print(char*str)
{
    int i;
    for (i=0 ; str[i]; i++)
    {
        printf("%c",str[i]);
    }
    printf("\n");
}

void scan_student(struct student *ps)
{
    int j=0;
    printf("\033[0;34m");
    printf("*********** Student **********\n");
    printf("\033[0m");
    printf("Full Name :");
    string_scan(ps->name,20);
    printf("Age: ");
    scanf("%d",&ps->age);
    printf("Phone number(11) :");
    scanf("%d",&ps->phone_number);
    printf("Grade(A,B,C,D,F) :");
    scanf(" %c",&ps->grade);
    printf("ID :");
    scanf("%d",&ps->ID);
    printf("\033[0;34m");
    printf("\n*********** Subjects **********\n");
    printf("\033[0m");
    printf("Numbers Of Subjects(MAX=7) : ");
    scanf("%d",&ps->numberofsubjects);
    ps->subjects=(sub_s*)calloc((ps->numberofsubjects),sizeof(sub_s));
    for (j=1; j <= ps->numberofsubjects; j++)
    {
        printf("Subject name :");
        string_scan(&(ps->subjects[j].name),10);
        printf("Subject grade(A,B,C,D) :");
        scanf(" %c",&(ps->subjects[j].subgrade));
    }
    printf("\033[0;34m");
    printf("\n*********** Parents **********\n");
    printf("\033[0m");
    printf("Father name : ");
    string_scan(ps->father.name,20);
    printf("Father's phone(11) :");
    scanf("%d",&ps->father.phone);
    printf("Mother name : ");
    string_scan(ps->mother.name,20);
    printf("Mothers's phone(11) :");
    scanf("%d",&ps->mother.phone);
}

void print_student(struct student *ps)
{
    int j=0;
    sub_s*subjects;
    printf("\033[1;31m");
    printf("\n\n-----------------------------------------------------\n");
    printf("STUDENT : %d |\n",ps->ID);
    printf("----------------------------------------------------- \n");
    printf("\033[0;34m");
    printf("*********** Student ********** \n");
    printf("\033[0m");
    printf("Name                : ");
    string_print(ps->name);
    printf("Age                 : %d \n",ps->age);
    printf("Phone number        : 0%d \n",ps->phone_number);
    printf("Grade               : %c \n",ps->grade);
    printf("ID                  : %d \n",ps->ID);
    printf("\033[0;34m");
    printf("\n*********** Subjects **********\n");
    printf("\033[0m");
    printf("Numbers Of Subjects : %d \n",ps->numberofsubjects);
    for(j=1; j <= ps->numberofsubjects; j++)
    {

        printf("Name                : ");
        string_print(ps->subjects[j].name);
        printf("Grade               : %c \n",ps->subjects[j].subgrade);
    }

    printf("\033[0;34m");
    printf("\n*********** Parents **********\n");
    printf("\033[0m");
    printf("Father name         : ");
    string_print((*ps).father.name);
    printf("Father's phone      : 0%d\n",ps->father.phone);
    printf("Mother name         : ");
    string_print((*ps).mother.name);
    printf("Mothers's phone     : 0%d\n",ps->mother.phone);

}

void  print_allstudents(struct student *ps,int size)
{
    int j,i=1;
    for (i=1; i<=size; i++)
    {
        printf("\033[1;31m");
        printf("\n\n-----------------------------------------------------\n");
        printf("STUDENT : %d |\n",ps[i].ID);
        printf("----------------------------------------------------- \n");
        printf("\033[0;34m");
        printf("*********** Student **********\n");
        printf("\033[0m");
        printf("Name:");
        string_print(ps[i].name);
        printf("Age:%d \n",ps[i].age);
        printf("Phone number :0%d\n",ps[i].phone_number);
        printf("Grade: %c \n",ps[i].grade);
        printf("ID:%d \n",ps[i].ID);
        printf("\033[0;34m");
        printf("\n*********** Subjects **********\n");
        printf("\033[0m");
        printf("Number Of Subjects:%d \n",ps[i].numberofsubjects);
        for(j=1; j<=ps[i].numberofsubjects; j++)
        {

            printf("Name: ");
            string_print(ps[i].subjects[j].name);
            printf("Grade: ");
            printf("%c\n",ps[i].subjects[j].subgrade);
        }

        printf("\033[0;34m");
        printf("\n*********** Parents **********\n");
        printf("\033[0m");
        printf("Father name: ");
        string_print(ps[i].father.name);
        printf("Father's phone :0%d\n",ps[i].father.phone);
        printf("Mother name: ");
        string_print(ps[i].mother.name);
        printf("Mothers's phone :0%d\n",ps[i].mother.phone);
    }

}



void call_student(struct student *ps)
{
    int i=0,x=0;
    while(i!=4)
    {
        x=0;
        printf("-----------------------------------------------------\n\n");
        printf("\033[0;34m");
        printf("*********** Student **********\n");
        printf("\033[0m");
        printf("Name            : ");
        string_print(ps->name);
        printf("Phone number    : 0%d\n",ps->phone_number);
        printf("\033[0;34m");
        printf("*********** Parents **********\n");
        printf("\033[0m");
        printf("Father name     : ");
        string_print(ps->father.name);
        printf("Father's phone  : 0%d\n",ps->father.phone);
        printf("Mother name     : ");
        string_print(ps->mother.name);
        printf("Mothers's phone : 0%d\n",ps->mother.phone);
        printf("\n-----------------------------------------------------\n\n");
        printf(" For calling student select \033[0;34m     1 \033[0m \n");
        printf(" For calling father select \033[0;34m      2 \033[0m \n");
        printf(" For calling mother select \033[0;34m      3 \033[0m \n");
        printf(" To go back to main menu select \033[0;34m 4 \033[0m \n");
        scanf("%d",&i);
        if (i==1)
        {
            while(x<=4)
            {
                clrscr();
                printf("calling.  \n 0%d",ps->phone_number);
                Sleep(500);
                clrscr();
                printf("calling..  \n 0%d",ps->phone_number);
                Sleep(500);
                clrscr();
                printf("calling...  \n 0%d",ps->phone_number);
                Sleep(500);
                clrscr();
                printf("calling.....  \n 0%d",ps->phone_number);
                Sleep(500);
                x++;
                clrscr();

            }
            printf("\033[0;34m");
           printf("\n **No Answer**\n");
            printf("\033[0m");
            Sleep(1000);
            clrscr();

        }
        else if (i==2)
        {
            while(x<=4)
            {
                clrscr();
                printf("calling. \n 0%d",ps->father.phone);
                Sleep(500);
                clrscr();
                printf("calling..  \n 0%d",ps->father.phone);
                Sleep(500);
                clrscr();
                printf("calling...  \n 0%d",ps->father.phone);
                Sleep(500);
                clrscr();
                printf("calling..... \n 0%d",ps->father.phone);
                Sleep(500);
                x++;
                clrscr();

            }
            printf("\033[0;34m");
            printf("\n **No Answer**\n");
            printf("\033[0m");
            Sleep(1000);
            clrscr();
        }
        else if (i==3)
        {
            while(x<=4)
            {
                clrscr();
                printf("calling.  \n 0%d",ps->mother.phone);
                Sleep(500);
                clrscr();
                printf("calling.. \n 0%d",ps->mother.phone);
                Sleep(500);
                clrscr();
                printf("calling... \n 0%d",ps->mother.phone);
                Sleep(500);
                clrscr();
                printf("calling..... \n 0%d",ps->mother.phone);
                Sleep(500);
                x++;
                clrscr();

            }
            printf("\033[0;34m");
            printf("\n **No Answer**\n");
            printf("\033[0m");
            Sleep(1000);
            clrscr();
        }
        else if(i==4)
        {
            x=4;
        }
    }
}

void remove_student(struct student *ps,int size,int pos)
{
    int i ;
    for (i=pos; i<size; i++)
    {
        ps[i+1].ID=ps[i].ID;
        ps[i]=ps[i+1];    // assign (i+1) to (i)
    }

}



void Edit_student(struct student *ps)
{

    int i,ch=0,j=0,n_sub=0,ch2=0,x=0,old_n=0;
    while (x==0)
    {

        printf("To edit student info select \033[0;34m    1 \033[0m \n");
        printf("To edit subjects info select \033[0;34m   2 \033[0m \n");
        printf("To edit parents info select \033[0;34m    3 \033[0m \n");
        printf("To go back to main menu select \033[0;34m 4 \033[0m \n");
        scanf("%d",&i);
        clrscr();

        if(i==1)
        {
            printf("To edit name select                  \033[0;34m  1 \033[0m \n");
            printf("To edit age select                  \033[0;34m   2 \033[0m \n");
            printf("To edit student's phone number select \033[0;34m 3 \033[0m \n");
            printf("To edit grade select                  \033[0;34m 4 \033[0m \n");
            printf("To edit ID select                  \033[0;34m    5 \033[0m \n");
            scanf("%d",&ch);
            clrscr();
            if(ch==1)
            {
                printf("Name:");
                string_scan(ps->name,20);
            }
            else if(ch==2)
            {
                printf("Age: ");
                scanf("%d",&ps->age);
            }
            else if(ch==3)
            {
                printf("Phone Number(11): ");
                scanf("%d",&ps->phone_number);
            }
            else if(ch==4)
            {
                printf("Grade(A,B,C,D,F): ");
                scanf(" %c",&ps->grade);
            }
            else if(ch==5)
            {
                printf("ID: ");
                scanf("%d",&ps->ID);
            }

            clrscr();

        }

        else if (i==2)
        {
            printf("To edit number of subjects select \033[0;34m 1 \033[0m \n");
            printf("To edit subjects name select \033[0;34m      2 \033[0m \n");
            printf("To edit subjects grade select \033[0;34m     3 \033[0m \n");
            scanf("%d",&ch);
            clrscr();

            if (ch==1)
            {
                printf("To add new subjects in same semester select  \033[0;34m 1 \033[0m \n\n");
                printf("To add new subjects as a new semester select \033[0;34m 2 \033[0m \n\n");
                scanf("%d",&ch2);
                clrscr();
                if (ch2==1)
                {
                    printf("Number of subjects you want to add \n");
                    scanf("%d",&n_sub);
                    old_n= ps->numberofsubjects;
                    clrscr();
                    printf("Number of total subjects (MAX=7) \n");
                    scanf("%d",&ps->numberofsubjects);
                    ps->subjects=realloc((ps->subjects),ps->numberofsubjects*sizeof(sub_s));
                    clrscr();
                    for(j=old_n+1 ; j<=ps->numberofsubjects ; j++)
                    {
                        printf("Subject Name :");
                        string_scan(&(ps->subjects[j].name),10);
                        printf("Subject Grade(A,B,C,D,F): ");
                        scanf(" %c",&(ps->subjects[j].subgrade));
                    }


                }

                else if(ch2==2)

                {
                    printf(" Enter the number of semester subjects you want (MAX=7) \n");
                    scanf("%d",&ps->numberofsubjects);
                    clrscr();
                    ps->subjects=realloc((ps->subjects),ps->numberofsubjects*sizeof(sub_s));
                    for(j=1; j<= ps->numberofsubjects ; j++)
                    {
                        printf("Subject Name :");
                        string_scan(&(ps->subjects[j].name),10);
                        printf("Subject Grade(A,B,C,D,F): ");
                        scanf(" %c",&(ps->subjects[j].subgrade));
                    }

                }
                clrscr();
            }

            else if (ch==2)

            {

                for(j=1; j<=ps->numberofsubjects; j++)
                {
                    printf("Subject Name: ");
                    string_print(ps->subjects[j].name);
                    printf("Subject Grade(A,B,C,D,F): %d \n",ps->subjects[j].subgrade);
                }
                clrscr();
            }

            else if (ch==3)
            {

                for (j=1; j <= ps->numberofsubjects; j++)
                {
                    printf("Subject Name: ");
                    string_print(ps->subjects[j].name);
                    printf("Subject Grade(A,B,C,D,F): ");
                    scanf("%c",&(ps->subjects[j].subgrade));

                }
                clrscr();
            }

        }
        else if (i==3)
        {
            printf("To edit Father's name select \033[0;34m 1 \033[0m \n");
            printf("To edit Father's phone number select \033[0;34m 2 \033[0m \n");
            printf("To edit Mother's name select \033[0;34m 3 \033[0m \n");
            printf("To edit Mother's phone number select \033[0;34m 4 \033[0m \n");
            scanf("%d",&ch);
            clrscr();
            if (ch==1)
            {
                printf(" Father Name: ");
                string_scan(ps->father.name,20);
            }
            else if (ch==2)
            {
                printf("Father's Phone(11) :");
                scanf("%d",&ps->father.phone);
            }
            else if (ch==3)
            {
                printf(" Mother Name: ");
                string_scan(ps->mother.name,20);
            }
            else if (ch==4)
            {
                printf("Mothers's Phone(11) :");
                scanf("%d",&ps->mother.phone);
            }
            clrscr();
        }
        if (i==4)
        {
            x=1;
        }


    }

}
int Find_name(struct student *ps,int size,char *str)
{
    int i,l1,l2;
    l1=string_length(str);
    for (i=1; i<=size; i++)
    {
        l2=string_length(ps[i].name);
        if(l1==l2)
        {

            if (string_compare(str,ps[i].name)==-1)
            {
                return i;
            }

        }

    }
    return Notfound;
}



void sorting_school_ByName (struct student *ps,int size)
{
    int i,j,x=size,max_i,TEMP;
    char max_str[20];
    struct student temp;
    for (j=1; j<=size-1; j++)
    {
        max_i=1;
        string_scan_temp(max_str,20,ps[1].name,20);
        string_print(max_str);
        for (i=1; i<=x; i++)
        {

            if (string_compare(ps[i].name,max_str)==1)
            {
                string_scan_temp(max_str,20,ps[i].name,20);
                max_i=i;
                string_print(max_str);

            }

        }
        temp=ps[max_i];
        ps[max_i]=ps[x];
        ps[x]=temp;
        TEMP=ps[max_i].ID;
        ps[max_i].ID=ps[x].ID;
        ps[x].ID=TEMP;
        x--;
    }
}

void sorting_school_ByAge (struct student *ps,int size)
{

    int i,j,max_i,x=size,max,TEMP;
    struct student temp;
    for (i=1; i<=size-1; i++)
    {
        max=ps[1].age;
        max_i=1;
        for (j=1; j<=x; j++)
        {
            if (ps[j].age>max)
            {
                max=ps[j].age;
                max_i=j;
            }
        }
        temp=ps[max_i];
        ps[max_i]=ps[x];
        ps[x]=temp;
        TEMP=ps[max_i].ID;
        ps[max_i].ID=ps[x].ID;
        ps[x].ID=TEMP;
        x--;
    }
}

void sorting_school_ByGrade (struct student *ps,int size)
{

    int i,j,max_i,x=size,TEMP;
    struct student temp;
    char max;
    for (i=1; i<=size-1; i++)
    {
        max=ps[1].grade;
        max_i=1;
        for (j=1; j<=x; j++)
        {
            if (ps[j].grade>max)
            {
                max=ps[j].grade;
                max_i=j;
            }
        }
        temp=ps[max_i];
        ps[max_i]=ps[x];
        ps[x]=temp;
        TEMP=ps[max_i].ID;
        ps[max_i].ID=ps[x].ID;
        ps[x].ID=TEMP;
        x--;
    }
}
void cmdClearScreen(void)
{
    //system("@cls||clear");
	system("cls"); //from windows APIs
}
