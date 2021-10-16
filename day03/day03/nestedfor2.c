#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int i, j, num;

	for (i = 0; i <= 5; i++) {
		for (j = 1; j < 6; j++) {
			num = i * 5 + j;
			printf("%5d", num);
		}
		printf("\n");
	}

	return 0;
}