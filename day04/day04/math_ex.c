#include <stdio.h>
#include <math.h>


int main() {
	//절대값 계산하기
	printf("%d\n", abs(3));
	printf("%d\n", abs(-3));

	//반올림
	printf("%.1f\n", round(2.54));
	printf("%.1f\n", round(2.3));
	printf("%.1f\n", round(-2.3));
	printf("%.1f\n", round(-2.5));
	
	//버림-음수일 경우 작은쪽으로
	printf("%.1f\n", floor(2.54));
	printf("%.1f\n", floor(-2.54));


	return 0;

}

