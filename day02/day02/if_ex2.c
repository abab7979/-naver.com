#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	
	//���̰����� ����Ḧ ���-�����оƵ�,�ʵ��л�,�߰���л�,�Ϲ���

	int age=6;
	int charge = 0;

    //���̺��� ���� ó��
	if (age < 8) {
		charge = 1000;
		printf("������ �Ƶ��Դϴ�.");
	}

	else if (age>=8 && age < 14) {
		charge = 2000;
		printf("�ʵ��л� �Ƶ��Դϴ�.");

	}

	else if (age >= 14 && age < 20) {
		charge = 2500;
		printf("�߰���л� �Ƶ��Դϴ�.");
	}

	else{
		charge = 3000;
		printf("�Ϲ����Դϴ�.");
	}

	printf("������ %d���Դϴ�.\n", charge);
	return 0;

}