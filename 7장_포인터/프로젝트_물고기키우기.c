#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int level; // 레벨 
int arrayFish[6]; // 어항
int* cursor; // 어항에 배열에 접근할 포인터

/* 필요한 데이터 초기화 */
void initData() {
	level = 1;
	for (int i = 0; i < 6; i++) {
		arrayFish[i] = 100;
	}
}

/* 어항 물 높이 출력 */
void printFishes() {
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++) {
		printf("  %3d ", arrayFish[i]);
	}
	printf("\n\n");
}

/* 어항 물 높이 줄이기 */
void decreaseWater(long elapsedTime) {
	for (int i = 0; i < 6; i++) {
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 증발하는 물의 양
		// 물 높이가 0 미만이면 물 높이는 0으로 고정
		if (arrayFish[i] < 0) {
			arrayFish[i] = 0;
		}
	}
}

/* 모든 물고기가 죽었는지 확인 */
int checkFishAlive() {
	for (int i = 0; i < 6; i++) {
		if (arrayFish[i] > 0) {
			return 1; 
		}
		return 0;
	}
}

int main(void) {
	long startTime = 0;
	int num;
	long totalElapsedTime = 0;
	long prevElapsedTime = 0;
	cursor = arrayFish;

	initData();
	startTime = clock();  // 프로그램 수행 이후 현재까지 흐른 시간을 시작 시간으로 저장
	while (1) {
		printFishes();

		printf("몇 번 어항에 물을 줄까요?(1~6): ");
		scanf_s("%d", &num);

		if (num < 1 || num > 6) {
			printf("\n입력값이 잘못됐습니다.\n");
			continue;
		}

		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;	  // 총 경과 시간을 초 단위로 표시
		printf("총 경과 시간: %ld초\n", totalElapsedTime);
		prevElapsedTime = totalElapsedTime - prevElapsedTime;  // 직전에 물을 준 시간 이후로 흐른 시간
		printf("최근 경과 시간: %ld초\n", prevElapsedTime);

		decreaseWater(prevElapsedTime);
		// 어항의 물 높이가 0 이하면
		if (cursor[num - 1] <= 0) {
			printf("%d번 어항의 물고기는 이미 죽었으므로 물을 주지 않습니다.\n", num);
		}
		// 어항의 물 높이가 100 이하면
		else if (cursor[num - 1] + 1 <= 100) {
			printf("%d번 어항에 물을 줍니다.\n\n", num);
			cursor[num - 1] += 1;
		}

		// 레벨업 확인 (20초마다 한 번씩 수행)
		if (totalElapsedTime / 20 > level - 1) {
			level++;
			printf("*** 축하합니다. %d 레벨에서 %d 레벨로 올랐습니다. ***\n\n", level - 1, level);
			if (level == 5) {
				printf("\n\n축하합니다. 최고 레벨을 달성했습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}

		if (checkFishAlive() == 0) {
			printf("모든 물고기가 죽었습니다. ㅠㅠ\n\n");
			exit(0);
		}
		else {
			printf("물고기가 아직 살아있어요!\n\n");
		}

		prevElapsedTime = totalElapsedTime;
	}

	return 0;
}