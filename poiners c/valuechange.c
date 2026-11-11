#include<stdio.h>

int main(){

    int myage=43;
    int *ptr=&myage;
    *ptr=50;

    printf("%d\n",myage);
   

}