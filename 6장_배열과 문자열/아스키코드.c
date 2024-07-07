#include <stdio.h>

int main(void) {
    /* printf("%c\n", 'a');
    printf("%d\n", 'a');
    printf("%c\n", 'b');
    printf("%d\n", 'b');
    printf("%c\n", 'A');
    printf("%d\n", 'A');
    printf("%c\n", '\0');
    printf("%d\n", '\0');
    printf("%c\n", '0');
    printf("%d\n", '0');    
    printf("%c\n", '1');
    printf("%d\n", '1'); */

    for (int i = 0; i < 128; i++) {
        printf("아스키코드 값%d: %c\n", i, i); 
    }   

    return 0;
}