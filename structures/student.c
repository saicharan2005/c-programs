#include<stdio.h>
struct student{ 
    char name[10];
    int roll;
};
struct student s1={"charan",1};
 int main(){
     
   printf("%s %d",s1.name,s1.roll);
 }
