#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[20];
    char roll[20];
    int sem;
};
typedef struct student std;
std s1,s2;
int main(){
    fflush(stdin);
    printf("enter name=");
    gets(s1.name);
    printf("roll number=");
    gets(s1.roll);
    printf("sem=");
    scanf("%d",&s1.sem);
    fflush(stdin);
    printf("enter name=");
    gets(s2.name);
    printf("roll number=");
    gets(s2.roll);
    printf("sem");
    scanf("%d",&s2.sem);
    printf("***********student details*********\n");
    printf("name    rolno     sem\n"); 
   
    printf("%s    %s      %d\n",s1.name,s1.roll,s1.sem);
    
    printf("%s    %s      %d",s2.name,s2.roll,s2.sem);
    
    
    
    
    return 0;
}