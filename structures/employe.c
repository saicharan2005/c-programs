#include<stdio.h>
struct employee{
    char na[20];
    char id[20];
    int ex;

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
       scanf("%d",&e[i].ex);
    }
    printf("name       idno       experience\n");
    for(i=0;i<n;i++){
       
    printf("%s         %s            %d\n",e[i].na ,e[i].id,e[i].ex);
    }
    return 0;

       
}



    

