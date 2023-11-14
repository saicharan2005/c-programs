#include<stdio.h>
#include<string.h>
int main(){
    int n,i,j;
    char t[10];
    printf(" no of students=");
    scanf("%d",&n);
    char names[n][10];
    fflush(stdin);
    for(i=0;i<n;i++){
        printf("%d",i+1);
        gets(names[i]);
    }
   
     for(i=0;i<n;i++){
         for(j=0;j<n-i-1;j++){
        if (strcmp(names[j],names[j+1])>0){
            strcpy(t,names[j]);
            strcpy(names[j],names[j+1]);
            strcpy(names[j+1],t);
        }
    }

    for(i=0;i<n;i++){
        printf("name %d",i+1);
        puts(names[i]);
    }
}
}