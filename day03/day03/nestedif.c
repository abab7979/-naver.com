#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int num = 7;

	if (num >= 10 && num % 2 == 0) {
		printf("%d�� 10�̻��� ¦���Դϴ�.\n", num);
	}
	else if (num >= 10 && num % 2 != 0) {
		printf("%d�� 10�̻��� Ȧ���Դϴ�.\n", num);
	}
	else if (num < 10 && num % 2 == 0) {
		printf("%d�� 10�̸��� ¦���Դϴ�.\n", num);
	}
	else {
		printf("%d�� 10�̸��� Ȧ���Դϴ�.\n", num);
	}
}