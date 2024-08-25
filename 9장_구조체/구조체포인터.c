#include <stdio.h>

// 구조체 정의
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main(void) {
	// 구조체 변수 선언
	struct GameInfo gameInfo1;

	// 구조체 멤버 저장
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2022;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	// 구조체 포인터 변수 선언
	struct GameInfo* gamePtr;
	gamePtr = &gameInfo1;

	// 구조체 멤버 출력
	/*
	printf("== 미션맨의 게임 출시 정보 ==\n");
	printf("게임 이름: %s\n", (*gamePtr).name);
	printf("발매 연도: %d\n", (*gamePtr).year);
	printf("게임 이름: %d\n", (*gamePtr).price);
	printf("게임 이름: %s\n", (*gamePtr).company);
	*/

	printf("== 미션맨의 게임 출시 정보 ==\n");
	printf("게임 이름: %s\n", gamePtr->name);
	printf("발매 연도: %d\n", gamePtr->year);
	printf("게임 이름: %d\n", gamePtr->price);
	printf("게임 이름: %s\n", gamePtr->company);
}