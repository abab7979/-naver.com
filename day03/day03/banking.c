#include <stdio.h>
#include <stdbool.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	//������� ���α׷�
	bool sw = true; //����ġ���� - ����,�ߴ��� ����
	int balance = 0; //�ܰ�

	while (sw) {
		int money;
		int selNo;
		printf("=================================\n");
		printf("1.���� | 2.��� | 3.�ܰ� | 4.����\n");
		printf("=================================\n");
		printf("����> ");
		scanf_s("%d", &selNo);
		
		//����ó��
		//����
		if (selNo == 1) {
			printf("���ݾ�>");
			scanf_s("%d", &money);
			balance += money;
		}
		else if (selNo == 2) {
			printf("��ݾ�>");
			scanf_s("%d", &money);
			balance -= money;
			if (balance <= 0) { //����
				printf("1.��ݺҰ���\n");//����
				printf("�ܰ�>%d\n", balance);//����
				
			}
		}
		else if (selNo == 3) {
			printf("�ܰ�>%d\n", balance);
		}
		else if (selNo == 4) {
			sw = false; //1���� 0���� �ٲپ���
			break; //��������.true flase �������� �Ƚᵵ�Ǵ°���
		}
		else {
			printf("�������� �ʴ� ����Դϴ�.\n");
		}
	}	//while End(����)
	printf("���α׷� ����");

		return 0;
}