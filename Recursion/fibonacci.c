#include<stdio.h>

int fib(int n){
    if (n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}
int main (){
    int i,result, terms;
    printf("enter terms:");
    scanf("%d", &terms);
    for(i=0; i<terms ;i++){
        printf("%d ", fib(i));
    }
    return 0;

}