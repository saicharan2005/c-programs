#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  FILE *fp;
  int n,i;
  typedef struct student{
    char name[20];
    char id_no[20];
    int year;
    } std;
   std s[10];
  fp=fopen("student.txt","w");
  if(fp==NULL){
    printf("not there");
    exit(0);
  }
  
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
    fprintf(fp,"*********student details*********\n");
    fprintf(fp,"year      name          roll no\n");
    for(i=0;i<n;i++){
    fprintf(fp," %d       %s        %s\n",s[i].year,s[i].name,s[i].id_no);
    
     
    }
  fclose(fp);
    return 0;
}