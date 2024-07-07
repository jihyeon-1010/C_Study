#include <stdio.h>

int main(void) {
    // 이름
    char name[256];
    printf("이름: ");
    scanf("%s", name, sizeof(name));

    // 나이
    int age;
    printf("나이: ");
    scanf("%d", &age);

    // 몸무게
    float weight;
    printf("몸무게: "); 
    scanf("%f", &weight);

    // 키
    double height;
    printf("키: ");
    scanf("%lf", &height);

    // 범죄명
    char what[256];
    printf("범죄명: ");
    scanf("%s", what, sizeof(what));

    // 조서 내용 출력
    printf("\n\n=== 범죄자 정보 ===\n\n");
    printf("이름  : %s\n", name);
    printf("나이  : %d\n", age);
    printf("몸무게: %.1f\n", weight);
    printf("키    : %.1lf\n", height);
    printf("범죄명: %s\n", what);

    return 0;
}