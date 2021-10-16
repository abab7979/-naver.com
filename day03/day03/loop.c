#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//1부터 n까지 출력문-무한반복
	// while~if~break문


	int n = 1;
	int sum = 0;
	while (1) {
		sum = sum + n;
		printf("%d\n", n);
		if (sum > 100 )//실행문이 한줄이면 {}생략가능
			break;
		n++;
	}
     printf("n=%d\n",n);
	 printf("sum=%d\n",sum);
	
	return 0;
}