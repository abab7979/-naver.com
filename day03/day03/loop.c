#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	//1���� n���� ��¹�-���ѹݺ�
	// while~if~break��


	int n = 1;
	int sum = 0;
	while (1) {
		sum = sum + n;
		printf("%d\n", n);
		if (sum > 100 )//���๮�� �����̸� {}��������
			break;
		n++;
	}
     printf("n=%d\n",n);
	 printf("sum=%d\n",sum);
	
	return 0;
}