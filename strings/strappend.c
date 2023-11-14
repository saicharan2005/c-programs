#include <stdio.h>
#include<conio.h>
int main() {
   char a[60],b[30];
   int i=0,j=0;
   fflush(stdin);
   printf("Enter  the string  a :");
   gets(a);
   printf("Enter  the string  b :");
   gets(b);
   while(a[i]!='\0')      
   i++;

    while(b[j]!='\0'){
       a[i]=b[j];
       i++;j++; 
      } 
   a[i]='\0';
   puts(a);
   getch();
   return 0;
}