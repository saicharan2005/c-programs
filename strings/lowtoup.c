#include <stdio.h>
#include<conio.h>
int main() {
   char a[30],b[30];
   int i=0,j=0;
   fflush(stdin);
   printf("Enter the character :");
   gets(a);
   while(a[i]!='\0'){
   if(a[i]>='a' && a[i]<='z'){
       b[j]=a[i]-32;
   }
   else{
       b[j]=a[i];
   }
   i++;
   j++; 
   }
   b[j]='\0';
   puts(b);
   return 0;
}