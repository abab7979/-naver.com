#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int num = 7;

	if (num >= 10 && num % 2 == 0) {
		printf("%d는 10이상의 짝수입니다.\n", num);
	}
	else if (num >= 10 && num % 2 != 0) {
		printf("%d는 10이상의 홀수입니다.\n", num);
	}
	else if (num < 10 && num % 2 == 0) {
		printf("%d는 10미만의 짝수입니다.\n", num);
	}
	else {
		printf("%d는 10미만의 홀수입니다.\n", num);
	}
}