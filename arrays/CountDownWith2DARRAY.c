#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,j,b,c;
    int a=0;
    printf("enter nuber to count down form : ");
    scanf("%d",&b);
    c=b/2;

    int arr[2][c];

    for(i=0;i<2;i++){
        for(j=0;j<c;j++){
            arr[i][j]=i*c+j;
        }
    }

    
    

  for(i=0;i<2;i++){
        for(j=0;j<c;j++){
          printf(" %d", arr[i][j]);
        }
    }








}
