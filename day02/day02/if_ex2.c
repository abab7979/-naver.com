#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	
	//놀이공원의 입장료를 계산-미취학아동,초등학생,중고등학생,일반인

	int age=6;
	int charge = 0;

    //나이별로 조건 처리
	if (age < 8) {
		charge = 1000;
		printf("미취학 아동입니다.");
	}

	else if (age>=8 && age < 14) {
		charge = 2000;
		printf("초등학생 아동입니다.");

	}

	else if (age >= 14 && age < 20) {
		charge = 2500;
		printf("중고등학생 아동입니다.");
	}

	else{
		charge = 3000;
		printf("일반인입니다.");
	}

	printf("입장료는 %d원입니다.\n", charge);
	return 0;

}