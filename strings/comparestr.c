#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() {
   char a[60],b[30];
   int i=0,s=0,l1,l2;
   fflush(stdin);
   printf("Enter  the string  a :");
   gets(a);
   printf("Enter  the string  b :");
   gets(b);
   l1=strlen(a);
   l2=strlen(b);
   if(l1==l2){
     while(i<l1){
     if(a[i]==b[i]){
          i++;
     }
     else{
          break;
     }
     }
    if(i==l1){
     s=1;
     printf("same");
     }
   }
   
     if(l1!=l2){
     printf(" not same");
     }
     if(s==0){
      if(a[i]>b[i]){
          printf("great");
     }
     if(a[i]<b[i]){
          printf("less");
     }
     }
   getch();
   return 0;
}