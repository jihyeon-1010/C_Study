#include <stdio.h>

int main(void) {
	typedef int 정수;
	정수 정수변수 = 3; // int i = 3;
	
	typedef float 실수;
	실수 실수변수 = 3.23f; // float f = 3.23f;
	
	printf("정수변수: %d, 실수변수: %.2f\n", 정수변수, 실수변수);
	
	return 0;
}