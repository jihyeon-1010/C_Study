#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10000 // 1. 매크로 정의

int main(void) {
	char str1[MAX]; // 2. '추첨번호' 문자열 저장 배열 선언
	char str2[MAX]; // 2. '보너스번호' 문자열 저장 배열 선언
	int num[6] = {0, 0, 0, 0, 0, 0}; // 3. 추첨번호 저장 배열 초기화
	int bonus = 0; // 3. 보너스번호 저장 변수 초기화
	
	FILE * file = fopen("./test2.txt", "rb"); // 4. 파일 포인터 얻기
	
	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	
	// 5. fscanf() 함수로 파일 읽기
	fscanf(file, "%s %d %d %d %d %d %d", str1, &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]);
	// 6. 추첨번호 출력
	printf("%s %d %d %d %d %d %d\n", str1, num[0], num[1], num[2], num[3], num[4], num[5]);
	// 7. fscanf() 함수로 파일 읽기
	fscanf(file, "%s %d", str2, &bonus);
	// 8. 보너스 번호 출력
	printf("%s %d", str2, bonus);
	
	// 9. 파일 닫기
	fclose(file);
}