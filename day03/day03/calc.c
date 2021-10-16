#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//산술연산자 값이 +-*/ 인 경우 사칙연산

	int num1=10;
	int num2=2;
	char operator='2';
	int result=0;

	//switch~case문 작성
	switch(operator){
    case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	default:
		printf("연산자 오류입니다.\n");
		return;
	}
	/*if (operator=='+') {
		result = num1 + num2;
	}
	
	else if (operator=='-') {
		result = num1 - num2;
	}

	else if (operator=='*') {
		result = num1 * num2;
	}

	else if (operator=='/') {
		result = num1 / num2;
	}

	else {
		printf("연산자 오류입니다.\n");
		return;//즉시종료 (if~else)
	}

	*/
	printf("결과값은%d입니다.", result);

	return 0;//메인함수 종료

}