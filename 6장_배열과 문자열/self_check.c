/* [문제]
어느 학생이 치른 시험의 총점과 평균을 구하는 프로그램을 배열로 만들어 보세요.
[조건]
- 배열에는 5과목의 시험 성적이 주어지며 범위는 0~100 사이의 정수입니다. 
- 총점은 정수로, 평균을 실수로 표현하되 소수점 이하 첫째 자리까지 출력합니다. */
#include <stdio.h>

int main(void) {
    int score[5];
    int sum = 0;
    float avg = 0.0f;

    printf("5과목의 점수를 입력하세요. \n");
    scanf_s("%d %d %d %d %d", &score[0], &score[1], &score[2], &score[3], &score[4]);

    for (int i = 0; i < 5; i++) {
        sum += score[i];
    }
    avg = sum / 5.0;

    printf("총점은 %d점, 평균은 %.1f점입니다.", sum, avg);

    return 0;
}