#include<stdio.h>
int main(){
    int n,i;
    printf(" no of students=");
    scanf("%d",&n);
    char names[n][10];
    fflush(stdin);
    for(i=0;i<n;i++){
        printf("%d",i+1);
        gets(names[i]);
    }
    for(i=0;i<n;i++){
        printf("name %d",i+1);
        puts(names[i]);
    }
}