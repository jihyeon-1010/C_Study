#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int getRandomNumber(int level);
void showQuestion(int level, int num1, int num2); 
void success();
void fail();

int main(void) {
    srand(time(NULL));
    int count = 0;
    int i;

    // 문제 출제(x * y ?)
    for(i = 1; i <= 5; i++) {
        int num1 = getRandomNumber(i); // 함수를 호출해 x 자리에 들어갈 정수 생성
        int num2 = getRandomNumber(i); // 함수를 호출해 y 자리에 들어갈 정수 생성
        showQuestion(i, num1, num2); // 문제 출력
        int answer = -1; 
        scanf("%d", &answer); // 정답 입력받기

        if (answer == -1) {
            printf("\n프로그램을 종료합니다.\n");
            exit(0);
        }   
        else if (answer == num1 * num2) {
            success();
            count++;
        }   
        else {
            fail();
        }   
    }   
    printf("\n\n비밀번호 %d개를 맞혔습니다.\n", count);

    return 0;
}

// 난수 생성
int getRandomNumber(int level) {
    return rand() % (level * 9) + 1;
}

// 문제 출력
void showQuestion(int level, int num1, int num2) {
    printf("\n\n\n======== %d번째 비밀번호 ========\n", level);
    printf("\n\t%d x %d ? \n\n", num1, num2);
    printf("=======================================\n");
    printf("비밀번호를 입력하세요. (종료를 원하면 -1 입력) >> ");
}

// 정답 처리
void success() {
    printf("\n >> Good! 정답입니다.\n");
}

// 실패 처리
void fail() {
    printf("\n >> 땡! 틀렸습니다.\n");
}