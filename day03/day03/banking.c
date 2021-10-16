#include <stdio.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	//은행업무 프로그램
	bool sw = true; //스위치변수 - 실행,중단을 구분
	int balance = 0; //잔고

	while (sw) {
		int money;
		int selNo;
		printf("=================================\n");
		printf("1.예금 | 2.출금 | 3.잔고 | 4.종료\n");
		printf("=================================\n");
		printf("선택> ");
		scanf_s("%d", &selNo);
		
		//업무처리
		//예금
		if (selNo == 1) {
			printf("예금액>");
			scanf_s("%d", &money);
			balance += money;
		}
		else if (selNo == 2) {
			printf("출금액>");
			scanf_s("%d", &money);
			balance -= money;
			if (balance <= 0) { //과제
				printf("1.출금불가능\n");//과제
				printf("잔고>%d\n", balance);//과제
				
			}
		}
		else if (selNo == 3) {
			printf("잔고>%d\n", balance);
		}
		else if (selNo == 4) {
			sw = false; //1에서 0으로 바꾸어줌
			break; //생략가능.true flase 했을때만 안써도되는것임
		}
		else {
			printf("지원되지 않는 기능입니다.\n");
		}
	}	//while End(종료)
	printf("프로그램 종료");

		return 0;
}