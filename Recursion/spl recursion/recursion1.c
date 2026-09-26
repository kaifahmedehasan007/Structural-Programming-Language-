#include<stdio.h>

int fun(int n){

    if(n==1){

        return 1;
    }
    else{return 1+fun(n-1);}


}
int main(){

    int num;
    scanf("%d", &num);
    int result=fun(num);
    printf("%d", result);
    return 0;

}