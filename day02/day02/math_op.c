#include<stdio.h>

int main() {
	
	int a = 99;
	int b = 2;

	printf("%d\n",a+b);//101
	printf("%d\n", a - b);//97
	printf("%d\n", a * b);//198
	printf("%d\n", a / b);//49
	printf("%d\n", a % b);//49

	//1����(������)
	printf("%d\n", a++);//a=a+1 a��99��. ������¶� 100�� ��
	printf("%d\n", a);//a��100

	//1����(������)
	printf("%d\n", ++a);//a�� 101, �����ع���
	printf("%d\n", a);

	//1����(�İ���)
	printf("%d\n", a--);//101
	printf("%d\n", a);//100

	//1����(������)
	printf("%d\n", --a);//99
	printf("%d\n", a);//99

	//���մ��Կ�����
	a += 2; // a = a + 2;
	printf("%d\n", a);
	a -= 2;

	b *= 3; // b = b * 2;
	printf("%d\n", b);

	b /= 2; // b = b / 2;
	printf("%d\n", b);
	return 0;

}