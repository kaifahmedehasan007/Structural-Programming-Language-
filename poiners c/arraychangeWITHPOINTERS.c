int main(){

    int myage[]={25,30,35,40};
    int i;
    int *ptr=&myage;
    *myage=17;
    *(myage+1)=18;


    for(i=0;i<4;i++){

        
        printf("%d\n",*(ptr+i));
        
    }

printf("%p\n",myage);


   

}