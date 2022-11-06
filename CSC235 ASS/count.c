//program to count 1
#include <stdio.h>
int main(){

    int b,num;
    printf("Program to print 1 to N numbers \n");

    printf("Accept N number:  \n");
    scanf("%d", &num);

    if(num<=0){

    }
        else{
            printf("The number from 1 to %d is \n", num);
            for(b=1; b<=num; b++){
                printf("\n%d", b);
            }
              
        }
            


        

    return 0;

}