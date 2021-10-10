#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//제곱수계산-x(입력값)->x*x
	int x, n1, n2;

	printf("숫자를 입력해주세요.:");
	scanf_s("%d", &x);
	printf("%d\n", x*x);
	printf("x의 주소값:0x%x\n",&x);

	//두수의 차
	printf("두수를 입력해주세요:");
	scanf_s("%d %d", &n1, &n2);
	printf("%d\n", n1-n2);
	printf("x의 주소값:0x%x\n", &n1);
	printf("x의 주소값:0x%x\n", &n2);
	return 0;
}