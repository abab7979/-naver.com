#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char a[10];
	char* b; //b라는 포인터를 정의

	printf("문자를 입력하세요.");
	scanf("%s", a);

	b = a;//a의 주소를 b에 저장.이말은 배열을 넣는다는것.
	printf("저정된 문자열:%s\n", b); //문자 다 출력


	return 0;

}