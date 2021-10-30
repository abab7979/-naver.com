#include <stdio.h>


int main() {
	//정수형 포인터 선언 및 연산
	char a = 'A';
	printf("a값은 %c\n", a);

	char *b;
	b=&a;
	printf("포인터 b가 가리키는 값 %c\n", *b);
	
	
	*b = 'B'; //값을 변경
	printf("a의 값은 %c\n", a); //B
	printf("b가 가리키는 값은 %c\n", a); //B

	return 0;

}