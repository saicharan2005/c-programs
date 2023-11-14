#include<stdio.h>
int main()
{
    int a,b;
    printf("enter a nd b");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping without temp \n a=%d\nb=%d",a,b );
    return 0;
}