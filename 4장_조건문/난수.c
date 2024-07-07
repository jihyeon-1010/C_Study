#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int i;
    // 난수 초기화 이전
    printf("난수 초기화 이전...\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", rand() % 10);
    }   
    
    // 난수 초기화 이후
    srand(time(NULL));
    printf("\n\n난수 초기화 이후...\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", rand() % 10);
    }   

    return 0;
}