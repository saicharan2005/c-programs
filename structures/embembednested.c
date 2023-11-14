#include<stdio.h>


struct student{
    char name[10];
    char id_no[10];
    int year;
    struct marks{
        int m1;
        int m2;
        int m3;
   };    //outside  create and struct marks m;
    struct marks m;

};
struct student s[10];
int main(){
     int n,i;
     printf("enter no of studets=");
     scanf("%d",&n);
     for(i=0;i<n;i++){
        printf(" enter student=%d  details\n",i+1);
        printf("enter name=");
        fflush(stdin);
        gets(s[i].name);
        printf("enter id no=");
        gets(s[i].id_no);
         printf("enter year =");
        scanf("%d",&s[i].year);
        printf("enter marks m1,m2,m3 =");
        scanf("%d %d %d",&s[i].m.m1,&s[i].m.m2,&s[i].m.m3); 
        
     }
      printf("name    id_no   year    m1 m2 m3\n");
      for(i=0;i<n;i++){
       printf("%s     %s      %d     %d  %d  %d \n",s[i].name,s[i].id_no,s[i].year,s[i].m.m1,s[i].m.m2,s[i].m.m3);
    }

    return 0;
}

   
  

   