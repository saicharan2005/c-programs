#include <stdio.h>
#include<conio.h>
int main() {
    
    int i=0;
    int c=1,n=1;
    char s[100];
    fflush(stdin);
    printf("enter=");
    scanf("%c",&s[i]);
     while( s[i]!= '*'){
       i++; 
       scanf("%c",&s[i]);
    }
    s[i]='\0';
    i=0; 
   
    while( s[i]!='\0'){

      if( (s[i]==' '  && (s[i+1]>='a' && s[i+1]<='z')) || (s[i]=='\n')){
      c++;
      }
     if( s[i]=='\n' ){
      n++;
    }
    i++;
    }
    printf("no of words=%d\n",c);
    printf("no of lines=%d\n",n);
    printf("no of chars=%d\n",i);
    return 0;

}