#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[20][20]={0};
    int r=2,c,i,j;
    a[0][0]=a[1][0]=a[1][1]=1;
    while(r<n){
        a[r][0]=1;
        for(c=1;c<=r;c++){
          a[r][c]=a[r-1][c-1]+a[r-1][c];
        }
        r++;
    }
        
    for(i=0;i<n;i++){
      for(j=0;j<=i;j++){
          printf("%d",a[i][j]);  
        }
        printf("\n");
    }
 
   return 0;
}