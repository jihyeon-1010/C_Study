#include <stdio.h>

int main(void) {
    int one, two, three;
    printf("정수 3개를 입력하세요: ");
    scanf("%d %d %d", &one, &two, &three);
    printf("첫 번째 값: %d\n", one);
    printf("두 번째 값: %d\n", two);
    printf("세 번째 값: %d\n", three);

    return 0;
}