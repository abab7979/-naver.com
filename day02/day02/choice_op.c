#include <stdio.h>

int main() {
	//조건연산자-조건식?참(1):거짓(0)
	int value;
	value = (3 > 4) ? 10 : 20;
	printf("결과값:%d\n", value);

	int fatherAge = 35;
	int motherAge = 38;

	printf("%d\n", fatherAge);//저장값
	printf("%0x\n", &fatherAge);//&주소의 값 %x나 %0x로 하면 16진수 주소값으로 알려줌


	char ch = (fatherAge > motherAge) ? 'T' : 'F';
	printf("결과값:%c\n", ch); 
	
	
	return 0;

}