#include<stdio.h>
#include<string.h>
int main(){
    char a[10],b[10];
    fflush(stdin); 
   
    printf("enter a=");
    gets(a);
    printf("enter b=");
    gets(b);
    if(strcmp(a,b)==0){
        printf("srings are idetical");
    }
   
    else{
         printf("sring are not same");
    }
   

}