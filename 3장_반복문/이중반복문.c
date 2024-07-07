#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 1; i <= 3; i++) {
        printf("첫 번째 반복문: %d\n", i); 
        for (j = 1; j <= 5; j++) {
            printf("    두 번재 반복문: %d\n", j); 
        }   
    }   
}