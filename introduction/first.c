#include <stdio.h>

int main(){  
    int n1,n2,gcd,lcm,c=1,sl;
    scanf("%d%d",&n1,&n2);
    sl=(n1<n2)?n1:n2;
    while(c<=sl){
        if(n1%c==0 && n2%c==0){
          gcd=c;
     }
     c++;
     }
     lcm=(n1*n2)/gcd;
     printf("%d %d",lcm,gcd);
    return 0;  
} 



