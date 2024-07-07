#include <stdio.h>

int main(void) {
    char str[] = "coding";
    /* printf("%s\n", str);
    printf("%d\n", sizeof(str)); */
   
    int i;
    for (i = 0; i < sizeof(str); i++) {
        printf("%c\n", str[i]);
    }   
    
    return 0;
}