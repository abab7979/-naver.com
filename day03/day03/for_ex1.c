#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//�ݺ���~for��

	int n;
	int total = 0;
	for (n = 1; n <= 10; n++) {
		total = total + n;
		printf("%3d", n);
	
	}
	printf("%3d", total);
	return 0;
}