#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000 // 1. 매크로 정의

int main(void) {
	char line[MAX]; // 2. 파일에서 읽어오는 문자열 저장
	
	FILE * file = fopen("./test1.txt", "rb");
	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}	    
	
	while (fgets(line, MAX, file) != NULL) { // 3. fgets() 함수로 파일 읽기
		printf("%s", line); // 4. 읽어 온 문자열 출력
	}
	
	fclose(file); // 5. 파일 닫기
	
	return 0;
}