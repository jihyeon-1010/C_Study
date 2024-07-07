#include <stdio.h>

int main(void) {
    /* char c = 'A';
    printf("%c\n", c); */

    char str[256];
    scanf("%s", str, sizeof(str));
    printf("%s\n", str);

    return 0;
}