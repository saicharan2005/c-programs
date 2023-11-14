#include<stdio.h>

struct employee{
    char name[10];
    char id_no[10];
    int exp;

};
void display(struct employee e[],int n);
struct employee e[10];
int main(){

    int n,i;
    printf("enter no of employees\n");
    scanf("%d", &n);
   for(i=0;i<n;i++){
   printf("******employee %d****\n",i+1);
   printf("enter name\n");
    fflush(stdin);
    gets(e[i].name);
    printf("enter roll number\n");
    scanf("%s",e[i].id_no);
    printf("experence\n");
    scanf("%d", &e[i].exp);
    }
    printf("name        idno       experience\n");
    display(e,n);

    return 0;
}
void display(struct employee e[],int n){
     int i;
for(i=0;i<n;i++){
    printf("%s         %s           %d\n",e[i].name,e[i].id_no,e[i].exp);
    }
}