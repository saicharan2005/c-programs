#include<stdio.h>
struct marks{
        int m1;//10th
        int m2;//inter
        int m3;  //btech
   }; 

struct employee{
    char name[10];
    char id_no[10];
    int exper;
       //outside  create and struct marks m;
    struct marks m;

};
struct employee s[10];

int main(){
     int n,i;
     printf("enter no of employees=");
     scanf("%d",&n);
     for(i=0;i<n;i++){
        printf(" enter employee=%d  details\n",i+1);
        printf("enter name=");
        fflush(stdin);
        gets(s[i].name);
        printf("enter id no=");
        gets(s[i].id_no);
         printf("enter experience =");
        scanf("%d",&s[i].exper);
        printf("enter marks m1,m2,m3 =");
        scanf("%d %d %d",&s[i].m.m1,&s[i].m.m2,&s[i].m.m3); 
        
     }
      printf("name    id_no     year     m1 m2 m3\n");
      for(i=0;i<n;i++){
       printf("%s    %s      %d     %d  %d  %d \n",s[i].name,s[i].id_no,s[i].exper,s[i].m.m1,s[i].m.m2,s[i].m.m3);
    }

    return 0;
}
