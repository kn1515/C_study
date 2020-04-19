#include <stdio.h>

#define ARRAY_SIZE 3

int main(void){
    int array[ARRAY_SIZE][ARRAY_SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    puts("-------------------");
    for(int i = 0; i < ARRAY_SIZE; ++i){
        for(int j = 0; j < ARRAY_SIZE; ++j){
            printf("|%3d  ", array[i][j]);

        }
        printf("|");
        putchar('\n');
        puts("-------------------");
    }

    return 0;
}