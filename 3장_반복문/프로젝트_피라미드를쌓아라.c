#include <stdio.h>

int main(void) {
    int floor;
    printf("몇 층으로 쌓겠습니까? (5~100): ");
    scanf("%d", &floor); 

    int i, j, k;
    for (i = 0; i < floor; i++) {
        for (j = i; j < floor - 1; j++) {
            printf(" ");
        }   
        for (k = 0; k < i * 2 + 1; k++) {
            printf("*");
        }   
        printf("\n");
    }   

    return 0;
}