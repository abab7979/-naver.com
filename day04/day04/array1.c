#include <stdio.h>

int main() {
	int a[3];
	int i;
	int sum=0;

	a[0] = 0;
	a[1] = 20;
	a[2] = 30;

	//�迭�� �ּ�,4����Ʈ�� ������. �迭�� 1���� 4����Ʈ����
	//�迭�� �̸�(a)�� �迭�� �����ּҿ� ����.
	printf("%x,%x,%x\n",&a[0],&a[1],&a[2]);
	printf("%x,%x,%x\n", a, a+1, a+2);
	for (i = 0; i < 3; i++) {
		printf("%d\n", a[i]);

	}
	//�޸��� ũ�� 1���� 4����Ʈ, ���⿡�� 0,1,2�̴ϱ� 12����Ʈ��
	printf("a�迭�� �޸� ũ��� %dbyte\n",sizeof(a));

	//�հ�
	//printf("%d\n", a[0]+a[1]+a[2]);
	for (i = 0; i < 3; i++) {
		sum += a[i];
	}
	printf("�հ�:%d\n", sum);

	return 0;
}