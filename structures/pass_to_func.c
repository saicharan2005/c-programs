#include<stdio.h>

struct student{
    char name[10];
    char id_no[10];
    int year;

};
void display(struct student s[],int n);
struct student s[10];
int main(){

    int n,i;
    printf("enter no of students\n");
    scanf("%d", &n);
   for(i=0;i<n;i++){
   printf("******student %d****\n",i+1);
   printf("enter name\n");
    fflush(stdin);
    gets(s[i].name);
    printf("enter roll number\n");
    scanf("%s",s[i].id_no);
    printf("year\n");
    scanf("%d", &s[i].year);
    }
    
    display(s,n);

    return 0;
}
void display(struct student s[],int n){
     int i;
for(i=0;i<n;i++){
    printf("namey=%s\nid_no=%s\nyear=%d\n",s[i].name,s[i].id_no,s[i].year);
    }
}