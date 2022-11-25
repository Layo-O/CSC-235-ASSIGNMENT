#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char name_of_file[100][50];
    int file_id[100];
    int compareable_f = 0;
    int lowest_id = 0;
    int number_file;
    int t;
    int stepcount;

    printf("number of steps: ");
    scanf("%d", &stepcount);

    for (int i = 0; i< stepcount; i++) {

        printf("Number of files: ");
        scanf("%d", &number_file);

        int j = 0;
       
        while (j<number_file) {
            scanf("%s %d", name_of_file[j], &file_id[j]);
            j++;
        }
        printf("\n");
        lowest_id = file_id[0];
        for (int j = 0; j< number_file; j++) {

            for (int i = j + 1; i < number_file; i++) {
                compareable_f = strcmp(name_of_file[j], name_of_file[i]);
                if((strcmp(name_of_file[j], name_of_file[i]) == 0) &&  (lowest_id > file_id[j])){
                    
                    lowest_id = file_id[j];
                }
                else if((strcmp(name_of_file[j], name_of_file[i]) != 0) && (file_id[j] > file_id[i])){
                    t = file_id[j];
                    file_id[j] = file_id[i];
                    file_id[i] = t;
                }
            }
        }
        for (int j = 0; j< number_file; j++) {
            if (compareable_f != 0){
                printf("%d\n", file_id[j]);
            }
        }
        if (compareable_f == 0){
            printf("%d\n", lowest_id);
        }
    }

}

