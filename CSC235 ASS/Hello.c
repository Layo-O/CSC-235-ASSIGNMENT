#include <stdio.h>
int main(){
    
    //Program to print Hello world! for my Lecturer
    char name[30];
    printf("Enter your name\n");
    scanf("%[^\n]%*c", name);
    printf("Hello World %s!\n");
    return 0;
}
