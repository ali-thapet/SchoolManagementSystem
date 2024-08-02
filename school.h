
#include <stdio.h>
#include <stdlib.h>

#ifndef SCHOOL_H
#define clrscr() printf("\e[1;1H\e[2J")
#define SCHOOL_H

#define Notfound 0
#define MAX 1000
#define options 8

extern int c;

/*  printf("\033[0;34m")           blue color
    printf("\033[1;31m)")          Bold blue color
    printf("\033[0m")              default color
    printf("\033[1;31m")           Bold red color
*/
typedef struct sub
{
    char name[10];
    char subgrade;
} sub_s;

typedef struct parents
{
    char name[20];
    int phone;
} parent_info;

struct student
{
    char name[20];
    int age;
    int phone_number;
    char grade;
    int ID;
    int numberofsubjects;
    sub_s *subjects ;
    parent_info father;
    parent_info mother;
};
void cmdClearScreen(void);
void scan_student(struct student *ps);
void print_student(struct student *ps);
void  print_allstudents(struct student *ps,int size);
void string_print(char*str);
void string_scan(char *str,int size);
void call_student(struct student *ps);
void remove_student(struct student *ps,int size,int pos);
void Edit_student(struct student *ps);
int string_compare(char*str1,char*str2);
int Find_name(struct student *ps,int size,char *str);
void sorting_school_ByName (struct student *ps,int size);
int string_length(char*str);
void sorting_school_ByAge (struct student *ps,int size);
void sorting_school_ByGrade (struct student *ps,int size);
void string_scan_temp(char *temp,int size1,char *str2,int size2);
#endif // SCHOOL_H
