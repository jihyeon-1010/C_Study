#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// test1.txt 파일을 생성해서 열고, file이라는 이름의 파일 포인터가 가리키는 코드
	// 'wb'는 바이너리 데이터를 쓰는 목적으로 새 파일을 생성하겠다는 뜻
	FILE* file = fopen("./test1.txt", "wb");
	
	// 파일 포인터 값이 NULL인지 확인 (파일 포인터가 NULL이면 파일을 생성하지 못했다는 뜻)
	if (file == NULL) {
		printf("파일 열기 실패\n");
		return 1;
	}
	
	// test1.txt에 텍스트 쓰기
	fputs("fputs() 함수로 글을 써 볼게요.\n", file);
	fputs("잘 써지는지 확인해 주세요.\n", file);
	
	// 파일 닫기
	fclose(file);
	
	return 0;
}