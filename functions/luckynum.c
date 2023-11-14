#include<stdio.h>
#include<stdlib.h>
#include<math.h>
 int luckynum(char n[20]);
 int main(){
    char x[20];
    scanf("%s",&x);
    luckynum(x);
    return 0;
 }
 int luckynum(char n[20]){
    int num;
    int l;
    int d;
    int sum=0;
    num=atoi(n);
    while(l==1){
     
        while(num>0){
           d=d%10;
           sum+=d;
           num=num/10;
        }
        num=sum;
        l=(int)log10(num);
      
    }
    printf("%d",num);
    
     return 0;
 }