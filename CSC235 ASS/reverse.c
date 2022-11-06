#include <stdio.h>
#include <string.h>
int main(){
    char Sent[50];
    int len,j;
printf("program to reverse a sentence \n");

printf("Enter the sentence: \n");
scanf("%[^\n]%*C", Sent);
// to find the lenght of the sentence
len = strlen(Sent);
for(j= len-1; j<=0; j--){
    printf("%c", Sent[j]);
    printf("the reverse of Sent is %s", strrev(Sent));
}
return 0;

}

