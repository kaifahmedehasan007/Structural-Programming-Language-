#include<stdio.h>
int main(){

    int myage[]={25,30,35,40};
    int i;
    int *ptr=&myage;


    for(i=0;i<4;i++){

        
        printf("%d\n",*(ptr+i));
        
    }




   

}