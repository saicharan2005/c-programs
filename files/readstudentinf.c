#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
  FILE *fp;
  int n=3,i;
  typedef struct student{
    char name[20];
    char id_no[20];
    int year;
    } std;
   std s[10];
  fp=fopen("student.txt","r");
  if(fp==NULL){
    printf("not there");
    exit(0);
  } 
    
    for(i=0;i<n;i++){
     fscanf(fp,"%d %s %s",&s[i].year,s[i].name,s[i].id_no);
   
    }
    printf("*********student details*********\n");
    printf("year      name          roll no\n");
    for(i=0;i<n;i++){
    printf(" %d       %s        %s\n",s[i].year,s[i].name,s[i].id_no);
     
    }
  fclose(fp);
    return 0;
}