#include <stdio.h>

int main(void) {
    char name[256];
    printf("이름이 뭐예요? ");
    scanf("%s", name, sizeof(name));
    printf("입력받은 이름: %s\n", name);

    return 0;
}