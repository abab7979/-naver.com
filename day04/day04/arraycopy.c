#include <stdio.h>

int main() {
	//�迭�� ����

	char a1[] = "TEN";
	char a2[4];
	char a3[4];
	int i;

	//�迭 a1�� a2�� ����

	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}

	//���
	printf("%s\n", a1);
	printf("%s\n", a2);

	//a1�� a2�� �Ųٷ� ����(����)
	for (i = 0; i < 4; i++) {
		a2[i] = a1[2-i];
	}
	a2[3] = '\0';//�̰� �ȳ����� ����

	printf("%s\n", a2);

	return 0;
}