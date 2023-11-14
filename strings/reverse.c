#include <stdio.h>
#include<conio.h>
#include<string.h>
int main() {
   char a[30];
   int i=0,l;
   char temp;
   fflush(stdin);
   printf("Enter  the string  a :");
   gets(a);
   l=strlen(a)-1;
   while(i<l){
      temp=a[i];
      a[i]=a[l];
      a[l]=temp;
      i++;
      l--;


   }

   puts(a);
}