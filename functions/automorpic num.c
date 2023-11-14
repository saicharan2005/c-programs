#include<stdio.h>
 #include<math.h>
 int automorpic(int n);
 int main(){
    int x;
    scanf("%d",&x);
    automorpic(x);
    return 0;
 }
 int automorpic(int n){
     int r,y,f=0,d;
     r= n*n;
     d=(int)log10(n)+1;
     printf("%d\n",d);
     f=floor(pow(10,d));
     printf("%d\n",f);
        y=r%f;
     printf("%d",y);
     if(y==n){
        printf("yes");
     }
     else{
        printf("No");
     }
     return 0;
 }