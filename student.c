#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int roll;
    char name[50];
    char course[30];
    float marks;
};
void addstudent();
void displaystudents();
void searchstudent();
void deletestudent();
void updatestudent();
int main(){
    int choice;
    do{
        printf("\n ---student management system---\n");
        printf("1.add student\n");
        printf("2.display students\n");
        printf("3.search student\n");
        printf("4.update student\n");
        printf("5.delete student\n");
        printf("0.exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            addstudent();
            break;
        case 2: 
           displaystudents();
           break;
        case 3:
           searchstudent();
           break;
        case 4:
           updatestudent();
           break;
        case 5:
           deletestudent();
           break;
        case 0:
           printf("exiting program...\n");
           break;
        default:
           printf("invalid choice\n");
        }
    }while (choice !=0);
    return 0;
}
