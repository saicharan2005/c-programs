#include<stdio.h>
int main(){
   int x;
   int *a;
   a=&x;
   int i;
   int f=0;

  
   printf("enter x=");
   scanf("%d",a);
   while(*a !=-1){
     if(*a==1){
        printf("%d is neither prime nor composite\n",*a);
    }
    if(*a==2){
        printf("%d is prime\n",*a);
    }
    for(i=2;i<*a/2;i++){
        if(*a%i==0){
            f=1;
           
        }
    }
    if(f==0){
        printf("%d if prime number\n",*a);
    }
    else{
        printf("%d if composite number\n",*a);
    }
    printf("enter x=");
   scanf("%d",a);
   }
   
  
    return 0;
  
}