#include<stdio.h>
int gcd(int a,int b);
int main(){
   int a,b;
   int re;
   printf("enter a,b");
   scanf("%d %d", &a,&b);
   re=gcd(a,b);
   printf("%d",re);
   return 0;
}
int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    else{
        return gcd(b,a%b);
    }
}