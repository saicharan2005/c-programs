#include<stdio.h>
int bigest(int a,int b,int c);
int main(){
   int a,b,c;
   printf("enter a,b,c");
   scanf("%d%d%d",&a,&b,&c);
   bigest(a,b,c);
   return 0;
}
int bigest(int a,int b,int c){
    if(a>b && a>c){
        printf("%d is big",a);
    }
    else  if(b>a && b>c){
        printf("%d is big",b);
    }
    else{
        printf("%d is big",c);  
    }
    return 0;
}
