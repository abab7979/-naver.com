#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//1���� n���� ���ϱ�

	int n = 1; //�ݺ� Ƚ��
	int sum = 0;//�հ踦 ������ ����

	while (n <= 10) {

		sum = sum + n;
		printf("n= % d, sum=%d\n", n,sum);
		n++;
	}
	printf("sum=%d", sum);
	return 0;
}