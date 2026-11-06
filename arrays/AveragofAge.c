#include<stdio.h>
int main(){

    int age[]={55,65,85,75,90,43,20,60};
    
    int length=sizeof(age)/sizeof(age[0]);
    int sum=0,i;
    for(i=0;i< length;i++){
        sum=sum+age[i];

    }
    float avg =sum/length;
    printf("the average age is %.3f", avg);



}