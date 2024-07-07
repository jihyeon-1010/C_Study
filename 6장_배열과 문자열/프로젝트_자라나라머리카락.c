// 약병 4개 중 어떤 게 진짜 발모제인지 찾는 게임
// 총 3회 테스트하는데 발모제를 한 번에 무작위로 2개 or 3개 조합해 머리에 부었을 때 머리카락이 나는지 안 나는지 확인
// 사용자는 테스트를 3회 진행하고 나서 발모제가 몇 번인지 입력 (맞으면 정답 메시지를, 틀리면 오답 메시지와 함께 정답 번호를 출력하고 게임 종료)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    int treatment = rand() % 4;  // 진짜 발모제

    printf("\n\n ===== 자라나라 머리카락 게임 ===== \n\n");
    int cntShowBottle = 0;
    int prevCntShowBottle = 0;

    // 총 3회 테스트
    for (int i = 1; i <= 3; i++) {
        int bottle[4] = { 0, 0, 0, 0 };

        do {
            cntShowBottle = rand() % 2 + 2;  // 조합할 약병 개수(2개 or 3개) 
        } while (cntShowBottle == prevCntShowBottle);
        prevCntShowBottle = cntShowBottle;  // 이번 회차의 약병 개수 저장
        printf(" > %d번째 테스트", i);

        int isIncluded = 0;  // 진짜 발모제인지 확인용

        for (int j = 0; j < cntShowBottle; j++) {
            int randBottle = rand() % 4;
            // 아직 선택되지 않은 약병이라면 
            if (bottle[randBottle] == 0) {
                bottle[randBottle] = 1;
                // 랜덤으로 뽑은 약병이 진짜 발모제라면
                if (randBottle == treatment) {
                    isIncluded = 1;
                }
            }
            else {  // 이미 선택된 약병이라면
                j--;
            }
        }

        for (int k = 0; k < 4; k++) {
            if (bottle[k] == 1) {
                printf("%d ", k + 1);
            }
        }
        printf("번 물약을 머리에 바릅니다.\n\n");

        // 약병 조합에 진짜 발모제가 포함된 경우
        if (isIncluded == 1) {
            printf(">> 성공! 머리카락이 났어요!!\n");
        }
        else {  // 약병 조합에 발모제가 포함되지 않은 경우
            printf(">> 실패! 머리카락이 나지 않았어요ㅜㅜ\n");
        }

        printf("계속 하려면 엔터를 누르세요. \n");
        getchar();
    }

    int answer;
    printf("\n 진짜 발모제는 몇 번일까요? ");
    scanf_s("%d", &answer);
    if (answer == treatment + 1) {
        printf("\n>> 정답입니다!\n");
    }
    else {
        printf("\n>> 땡! 틀렸습니다. 정답은 %d번이었습니다.", treatment + 1);
    }

    return 0;
}