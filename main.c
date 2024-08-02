#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<time.h>
#include<mmsystem.h>
#include"school.h"


int main()
{

    int op=0,ID=0,Go_back=0,pos=0,s=0,result=0;
    char str[20];
    printf(                                   "\033[1;34m");
    printf("\n\n                              **** W E L C O M E   T O   A L  M A N A R    S C H O O L ****\n\n\n");
    printf("\033[0m");
    struct student arr[MAX]={0};
    while(op<=options)

    {

        printf("\033[1;34m");
        printf("\n         _______________________________________\n        |                                       |\n");
        printf("\033[0m");
        printf("\033[1;34m        | \033[0m select \033[0;34m  1 \033[0m To Add_stuent      \033[1;34m      | \033[0m \n");
        printf("\033[1;34m        | \033[0m select \033[0;34m  2 \033[0m To Delete  \033[1;34m              | \033[0m \n");
        printf("\033[1;34m        | \033[0m select \033[0;34m  3 \033[0m To Edit information \033[1;34m     | \033[0m \n");
        printf("\033[1;34m        | \033[0m select \033[0;34m  4 \033[0m To Print_student \033[1;34m        | \033[0m \n");
        printf("\033[1;34m        | \033[0m select \033[0;34m  5 \033[0m To Print_school \033[1;34m         | \033[0m \n");
        printf("\033[1;34m        | \033[0m select \033[0;34m  6 \033[0m To Call student \033[1;34m         | \033[0m \n");
        printf("\033[1;34m        | \033[0m select \033[0;34m  7 \033[0m To Sorting all student  \033[1;34m | \033[0m \n");
        printf("\033[1;34m        | \033[0m select \033[0;34m any else \033[0m To Exit        \033[1;34m    | \033[0m \n");
        printf("\033[1;34m");
        printf("        |_______________________________________|\n");
        printf("\033[0m");
        printf("\n         Enter your operation :  ");
        Go_back=0;
        scanf("%d",&op);
        if (op==1)
        {
            c++;
            if(c<=MAX)
            {
                cmdClearScreen();
                printf("\033[0;34m");
                printf(" \n                           ** After add all information wait to appear message Done **\n\n");
                printf("\033[0m");
                scan_student(&arr[c]);
                Sleep(1000);
                cmdClearScreen();
                printf("\033[0;34m");
                printf("\n\n                                                                      **Done**\n");
                printf("\033[0m");
                Sleep(1000);
                cmdClearScreen();

            }
        }
        else if(op==2)
        {
            if(c==0)
            {
                cmdClearScreen();
                printf("                    **No Students Have Been Added** \n");
                Sleep(1000);
                cmdClearScreen();
            }
            else
            {
                cmdClearScreen();
                printf("Enter the ID which you want to delete\n");
                scanf("%d",&pos);
                remove_student(&arr,c,pos);
                c--;
                cmdClearScreen();
            }


        }
        else if (op==3)
        {
             if(c==0)
            {
                cmdClearScreen();
                printf("                    **No Students Have Been Added** \n");
                Sleep(1000);
                cmdClearScreen();
            }
            else
            {
                 cmdClearScreen();
            printf("To search with ID select \033[0;34m   1 \033[0m \n");
            printf("To search with Name select \033[0;34m 2 \033[0m \n");
            scanf("%d",&s);
            if(s==1)
            {
                printf("Enter student ID :");
                scanf("%d",&ID);
                cmdClearScreen();
                Edit_student(&arr[ID]);

            }
            else if(s==2)
            {
                cmdClearScreen();
                printf("Enter student's Name\n");
                string_scan(str,20);
                result=Find_name(&arr,c,str);
                if (result==0)
                {
                    printf("\033[0;34m");
                    printf("\nName not found\n");
                    printf("\033[0m");
                    Sleep(1500);
                }
                else
                {
                    printf("\033[0;34m");
                    printf("\nDONE\n");
                    printf("\033[0m");
                    Edit_student(&arr[result]);
                }

            }
               cmdClearScreen();
            }

        }

        else if(op==4)
        {
            cmdClearScreen();
            if(c==0)
            {
                cmdClearScreen();
                printf("                    **No Students Have Been Added** \n");
                Sleep(1000);
                cmdClearScreen();
            }
            else
            {
                printf("Enter student ID :");
                scanf("%d",&ID);
                cmdClearScreen();
                print_student(&arr[ID]);
                printf("\n\n");
                printf("To go back enter \033[0;34m 1 \033[0m\n");
                scanf("%d",&Go_back);
            }

            if (Go_back==1)
            {
                cmdClearScreen();
            }
        }
        else if(op==5)
        {
            if(c==0)
            {
                cmdClearScreen();
                printf("                    **No Students Have Been Added** \n");
                Sleep(1000);
                cmdClearScreen();
            }
            else
            {
                cmdClearScreen();
                print_allstudents(arr,c);
                printf("\n\n");
                printf("To go back enter \033[0;34m 1 \033[0m\n");
                scanf("%d",&Go_back);
            }
            if (Go_back==1)
            {
                cmdClearScreen();
            }


        }
        else if (op==6)
        {
            if(c==0)
            {
                cmdClearScreen();
                printf("                    **No Students Have Been Added** \n");
                Sleep(1000);
                cmdClearScreen();
            }
            else
            {
                cmdClearScreen();
                printf("Enter student ID :");
                scanf("%d",&ID);
                cmdClearScreen();
                call_student(&arr[ID]);
                cmdClearScreen();
            }

        }
        else if(op==7)
        {
            if(c==0)
            {
                cmdClearScreen();
                printf("                    **No Students Have Been Added** \n");
                Sleep(1000);
                cmdClearScreen();
            }
            else
            {
                cmdClearScreen();
                printf("\n\n");
                printf("For Sorting School by Name select \033[0;34m  1 \033[0m \n");
                printf("For Sorting School by Age select \033[0;34m   2 \033[0m \n");
                printf("For Sorting School by Grade select \033[0;34m 3 \033[0m \n");
                scanf("%d",&s);
                cmdClearScreen();
                if(s==1)
                {
                    sorting_school_ByName (&arr,c);
                    print_allstudents(&arr,c);
                }
                if (s==2)
                {
                    sorting_school_ByAge (&arr,c);
                    print_allstudents(&arr,c);
                }
                if(s==3)
                {
                    sorting_school_ByGrade(&arr,c);
                    print_allstudents(&arr,c);
                }
                printf("\nTo go back enter \033[0;34m 1 \033[0m\n");
                scanf("%d",&Go_back);
            }

            if (Go_back==1)
            {
                cmdClearScreen();
            }
        }
        else
        {
            return 0;
        }

    }
}
