#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	//�ܵ� if��
	int age = 8;

	if (age < 8) {
		printf("�б��� ���� �ʽ��ϴ�.");
	}
	printf("���̴� %d���Դϴ�.\n", age);
	
	
	//if~else��
	int score = 70;

	if (score >= 60) {
		printf("�հ��Դϴ�.\n");
	}
	else{//(score<60)�� ����
		printf("���հ��Դϴ�.\n");
	}
	
	printf("������ %d���Դϴ�.\n",score);

	//¦��/Ȧ���� �����ϴ� ���α׷�
	int num;

	printf("������ �Է��ϼ���:");
	scanf_s("%d", &num);

	if(num % 2 == 0) {
		printf("¦���Դϴ�.\n");
	}
	else {
		printf("Ȧ���Դϴ�.\n");
	}
	return 0;

}