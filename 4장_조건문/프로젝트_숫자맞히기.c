#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    srand(time(NULL));
    int num = rand() % 100 + 1;
    int answer = 0;
    int chance = 5; // 정답 기회

    // 정답을 맞힐 때까지 반복
    while (1) {
        printf("====== 남은 기회 %d번 ======\n", chance--);
        printf("숫자를 맞혀 보세요. (1~100): ");
        scanf("%d", &answer);
    
        if (answer > num) {
            printf("DOWN!!\n\n");
        }   
        else if (answer < num) {
            printf("UP!!\n\n");
        }   
        else if (answer == num) {
            printf("정답!!\n\n");
            break;
        }   
        else {
            printf("알 수 없는 오류 발생\n\n");
        }   
            
        // 5번 안에 정답을 맞히지 못했을 때
        if (chance == 0) {
            printf("아쉽게도 모든 기회를 사용했습니다.\n정답은 %d입니다.\n", num);
            break;
        }   
    }   


    return 0;
}