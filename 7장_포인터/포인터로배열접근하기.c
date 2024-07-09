#include <stdio.h>

int main(void) {
    int arr[3] = { 5, 10, 15 };
    for (int i = 0; i < 3; i++) {
        printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
    }

    int* ptr = arr;
    for (int i = 0; i < 3; i++) {
        printf("포인터 변수 ptr[%d]의 값: %d\n", i, ptr[i]);
    }

    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
    for (int i = 0; i < 3; i++) {
        // printf("배열 arr[%d]의 값: %d\n", i, arr[i]);
        printf("배열 arr[%d]의 값: %d\n", i, *(arr + i));
    }

    for (int i = 0; i < 3; i++) {
        // printf("포인터 변수 ptr[%d]의 값: %d\n", i, ptr[i]);
        printf("포인터 변수 ptr[%d]의 값: %d\n", i, *(ptr + i));
    }

    return 0;
}