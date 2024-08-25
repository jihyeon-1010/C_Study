#include <stdio.h>

// 구조체 정의
struct GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main(void) {
	struct GameInfo gameArray[2] = {
		{"나도게임", 2022, 50, "나도회사"},
		{"너도게임", 2022, 100, "너도회사"}
	};
	
	return 0;
}