#include<stdio.h>
int expo(int a,int b);
int main(){
   int a,b;
   int re;
   printf("enter a,b");
   scanf("%d %d", &a,&b);
   re=expo(a,b);
   printf("%d",re);
   return 0;
}
int expo(int a,int b){
    if(b==0){
        return 1;
    }
    else{
        return (a*expo(a,b-1)) ;
    }
}