#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//1부터 n까지 더하기

	int n = 1; //반복 횟수
	int sum = 0;//합계를 저정할 변수

	while (n <= 10) {

		sum = sum + n;
		printf("n= % d, sum=%d\n", n,sum);
		n++;
	}
	printf("sum=%d", sum);
	return 0;
}