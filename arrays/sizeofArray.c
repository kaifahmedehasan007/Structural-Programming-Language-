#include<stdio.h>
int main(){
 int myNumbers[] = {25, 50, 75, 100,60,70,90};

int length = sizeof(myNumbers) / sizeof(myNumbers[0]);
printf("\n%d\n", length);
int i;

for (i = 0; i < length; i++) {
  printf("%d\n", myNumbers[i]);
}


}