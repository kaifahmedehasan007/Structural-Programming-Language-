#include<stdio.h>
 int n=1,num;

void odd(){
    if(n<=num){
        printf("%d ",n+1);
        ++n;
        even();
    }
        return;
}

void even(){
    if(n<=num){
        printf("%d ",n-1);
        ++n;
        odd();
    }
       return;
}

int main(){
    scanf("%d",&num);
    odd();
    
}