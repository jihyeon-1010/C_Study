#include <stdio.h>

int main(void) {
    float arr[5] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f};
    int i;
    for (i = 0; i < 5; i++) {
        printf("%.2f\n", arr[i]);
    }   

    return 0;
}