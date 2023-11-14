#include<stdio.h>
int fact( int n )
{
  int i;
  int p=1;

 for(i=1;i<=n;i++){
    p=p*i;
   
}
return p;


}
int  main(){
    int n,r;
    float re;
    printf("enter n");
    scanf("%d",&n);
    printf("enter r");
    scanf("%d",&r);
    re= (float) fact(n)/(fact(n-r)*fact(r));
    
    printf("binomial coeffcient=%.2f",re);
    return 0;


}