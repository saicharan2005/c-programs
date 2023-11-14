#include<stdio.h>

struct student{
    char name[20];
    char id_no[20];
    int year;

};
struct student s[10];
int main(){
    int n,i;
    printf("enter no of students=");
    scanf("%d",&n);
    
    for(i=0;i<n;i++){
    fflush(stdin);
     printf("enter name=");
     gets(s[i].name);
     printf("enter rollno=");
     gets(s[i].id_no);
    printf("enter year=");
     scanf("%d",&s[i].year);
    }
    printf("*********student details*********\n");
    printf("year      name          roll no\n");
    for(i=0;i<n;i++){
     printf(" %d       %s        %s\n",s[i].year,s[i].name,s[i].id_no);
    
     
    }
   
   
}