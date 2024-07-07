#include <stdio.h>

void convert_time(int minute);

int main(void) {
    int minute = 0;
    printf("분을 입력해주세요: ");
    scanf("%d", &minute);

    // 시간 + 분으로 환산하는 함수 호출
    convert_time(minute);

    return 0;
}

// 시간 정보를 분에서 시간 + 분으로 환산
void convert_time(int minute) {
    int hour = minute / 60; 
    int min = minute % 60; 

    printf("%d시간 %d분\n", hour, min);
}