#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
	char a[10];
	char* b; //b��� �����͸� ����

	printf("���ڸ� �Է��ϼ���.");
	scanf("%s", a);

	b = a;//a�� �ּҸ� b�� ����.�̸��� �迭�� �ִ´ٴ°�.
	printf("������ ���ڿ�:%s\n", b); //���� �� ���


	return 0;

}