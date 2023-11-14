#include<stdio.h>
struct experence{
   
    int ex;

};
struct employee{
    char na[20];
    char id[20];
    struct experence exp;

};
struct employee e[20];
int main(){
    int n,i;
    printf("no of employees=");
    scanf("%d",&n);
    for(i=0;i<n;i++){
       fflush(stdin);
       printf("enter name=");
       gets(e[i].na);
       fflush(stdin);
       printf("enter idno=");
       gets(e[i].id);
       printf("enter experience=");
       scanf("%d",&e[i].exp.ex);
    }
    printf("name       idno       experience\n");
    for(i=0;i<n;i++){
       
    printf("%s         %s            %d\n",e[i].na ,e[i].id,e[i].exp.ex);
    }
    return 0;

       
}