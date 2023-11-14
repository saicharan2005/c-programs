#include<stdio.h>
int gcd(int x, int y){
    int rem;
    rem=x%y;
    if(rem==0){
        return y;
    }
    else{
        return gcd(y,rem);
    }
}
int main(){
    int n1,n2,res;
    printf("enter n1 and n2=");
    scanf("%d%d",&n1,&n2);
    res=gcd(n1,n2);
    printf("gcd of %d,%d is %d",n1,n2,res);
    return 0;

} 