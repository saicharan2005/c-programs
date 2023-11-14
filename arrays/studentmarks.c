#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("no of students=");
    scanf("%d",&m);
    printf("no of subjects=");
    scanf("%d",&n);
    int a[m][n];
    
    for(i=0;i<m;i++){
        printf("enter student[%d]\n",i);
        for(j=0;j<n;j++){
            printf("enter marks[%d]=",j);
            scanf("%d",&a[i][j]);
        }
    }
    // total marks and average 
    int total=0;
    float avg=0;
    printf("student   total   average\n");
     for(i=0;i<m;i++){
    
        for(j=0;j<n;j++){
    
         total+=a[i][j];
         avg=(float)total/n;
        }
        printf("   %d       %d       %.2f  \n",i,total,avg);
    }
    // highest marks amoung each sub in students
    int h;
     for(j=0;j<n;j++){
             h=a[0][j];
        for(i=0;i<m;i++){
             if(a[i][j]>h){
                h=a[i][j];
             }
          
        }
       printf("student got highest marks in subject[%d]=%d\n",j,h);
        
    }  

}