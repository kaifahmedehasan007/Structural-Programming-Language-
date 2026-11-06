#include<stdio.h>
int i=0;
void countdown(int n){

if(n>=0){
  printf("%d ",i);
  i++;
  return countdown(n-1);
    }
   return;

}





int main(){
    int n;
   printf("Enter a number: ");
   scanf("%d",&n);
   countdown(n);
   return 0;


}