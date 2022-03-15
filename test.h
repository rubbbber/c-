#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void menu();
enum F
{
    Exit,
    Add,
    Del,
    Show,
    Sreach,
    Modify,
    Sort
};
typedef struct Peoinfo
{
    char name[10];
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
void showinfo();
void delinfo();
void sreachinfo();
void destoryContact();
void modinfo();
int supersreach();
int findinfo();