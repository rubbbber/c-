#include<stdio.h>
#include<stdlib.h>
void menu();
enum F
{
    Exit,
    Add,
    Del,
    Sreach,
    Sort,
    Modify
};
typedef struct Peoinfo
{
    char name[5];
    char tele[20];
    int age;
    char address[20];
    char id[20];
}Peo;
typedef struct Contact
{
    Peo* Date;
    int size;
    int capacity;
}C;
void initCon();
void addinfo();