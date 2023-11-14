#include <stdio.h>
#include<conio.h>
int main() {
   char a[60],sub[30];
   int i=0,n;
   fflush(stdin);
   printf("Enter  the string  a :");
   gets(a);
   printf("enter n");
   scanf("%d",&n);
    while(a[i]!='\0' && i<n){
       sub[i]=a[i];
       i++;
      } 
   sub[i]='\0';
   puts(sub);
   getch();
   return 0;
}