#include <stdio.h>

int main(void) {
    // 이름
    char name[256];
    printf("이름: ");
    scanf("%s", name, sizeof(name));

    // 아이디
    char id[256];
    printf("아이디: ");
    scanf("%s", id, sizeof(id));
    
    // 나이
    int age;
    printf("나이: ");
    scanf("%d", &age);

    // 생년월일
    char birthday[256];
    printf("생년월일: ");
    scanf("%s", birthday, sizeof(birthday));

    // 신발크기
    int size;
    printf("신발 크기: ");
    scanf("%d", &size);

    // 회원 정보 출력
    printf("\n\n=== 회원 정보 ===\n\n");
    printf("이름     : %s\n", name);
    printf("아이디   : %s\n", id);
    printf("나이     : %d\n", age);
    printf("생년월일 : %s\n", birthday);
    printf("신발 크기: %d\n", size);

    return 0;
}