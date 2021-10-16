#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//구구단 한 단만 출력하기

	//int dan=3;
	int i,j;
	//int dan;
	//scanf_s("%d", &dan);
	printf("***구구단***\n\n");
	for (i = 1; i <= 9; i++) {
		printf("===%d단===\n", i);
		for (j = 1; j <= 9; j++) {	
			printf("%d X %d = %d\n", i, j, (i * j));
		}
	}
	
	return 0;
}