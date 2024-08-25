#include <stdio.h>

typedef struct GameInformation {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
} GAME_INFO;

int main(void) {
	GAME_INFO game2;
	game2.name = "한글 게임2";
	game2.year = 2023;
	
	printf("== 게임 출시 정보 ==\n");
	printf("게임 이름: %s\n", game2.name);
	printf("발매 연도: %d\n", game2.year);
	
	return 0;
}