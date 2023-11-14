#include <stdio.h>
#include<conio.h>
int main() {
   char a[30],b[30],c[60];
   int i=0,j=0;
   fflush(stdin);
   printf("Enter  the string  a :");
   gets(a);
   printf("Enter  the string  b :");
   gets(b);
   while(a[i]!='\0'){
      c[j]=a[i];
      i++;
      j++;

   }
   i=0;
   
    while(b[i]!='\0'){
      c[j]=b[i];
      i++;
      j++;

   }
   c[j]='\0';
   puts(c);
   return 0;
}