#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(){
    int self_describing = 'T';
    char number_testcae[100];
    int number_array[100];
    int count = 0;
    int ln;

    printf("Enter number to test: ");
    scanf("%s", testcase);
    ln = strlen(testcase);
   
    
    for (int j = 0; j <ln; j++) {
        number_array[j] = testcase[j] - '0';
    }
    
    for (int j = 0; j < ln; j++) {
        printf("There are %d  %ds in the number \n", number_array[j],j);
    }
    for (int m = 0; m< ln; m++) {
        for (int i = 0; i< ln; i++) {
            if (number_array[i] == m) count++;
        }
        if(count == number_array[m]){
            self_describing = 'T';
        }
        else{
            self_describing = 'F';
            printf("\n");
            printf("Not self-describing\n");
            break;
        }
        count = 0;
        if (self_describing != 'F'){
            printf("\n");
            printf("Self-describing\n");
            break;
        }
    }
    
}

