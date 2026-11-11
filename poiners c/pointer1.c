#include<stdio.h>

int main(){

    int myage=43;
    int *ptr=&myage;

    printf("%d\n",ptr);
    printf("%p\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",&myage);
    printf("%p\n",&myage);

}