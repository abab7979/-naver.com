#include <stdio.h>

int main() {
	//���ǿ�����-���ǽ�?��(1):����(0)
	int value;
	value = (3 > 4) ? 10 : 20;
	printf("�����:%d\n", value);

	int fatherAge = 35;
	int motherAge = 38;

	printf("%d\n", fatherAge);//���尪
	printf("%0x\n", &fatherAge);//&�ּ��� �� %x�� %0x�� �ϸ� 16���� �ּҰ����� �˷���


	char ch = (fatherAge > motherAge) ? 'T' : 'F';
	printf("�����:%c\n", ch); 
	
	
	return 0;

}