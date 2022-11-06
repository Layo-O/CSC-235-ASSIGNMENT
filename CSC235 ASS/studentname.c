#include <stdio.h>
int main(){
    //progam to accept name of 10 students
    int num,b=10;
    char stdnam[30];
    printf("Name of 10 students\n");
    
    for(num=1; num<=b; num++){
        printf("Enter name of student:\n" );
        scanf("%[^\n]%*c", stdnam);
        //accept all characters including space
        printf("%d Name of students: %s\n", num, stdnam);
    }
    return 0;

    

}