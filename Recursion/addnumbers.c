#include<stdio.h>
int addittion(int n){
     
    if(n==1)
    {
        return 1;
    }
    else{
        return n+addittion(n-1);
    }

}

int main(){
    int num;
    scanf("%d",&num);
    int result=addittion(num);
    printf("%d",result);
    return 0;

}