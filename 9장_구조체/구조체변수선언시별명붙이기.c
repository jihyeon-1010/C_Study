#include <stdio.h>

struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
	struct GameInfo* friendGame;
};

int main(void) {
	typedef struct GameInfo 게임정보;
	게임정보 game1;
	game1.name = "한글 게임";
	game1.year = 2022;
		
	printf("== 게임 출시 정보 ==\n");
	printf("게임 이름: %s\n", game1.name);
	printf("발매 연도: %d\n", game1.year);
	
	return 0;
}