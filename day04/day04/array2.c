#include <stdio.h>

int main() {
	int arr[] = { 10,20,30,40 };
	int i;
	int sum = 0;
	//30�� ���
	printf("arr[2]=%d\n", arr[2]);

	//��ü���
	for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]); 

	}
	printf("\n");
	//�հ�
	for (i = 0; i < 4; i++) {
		sum += arr[i];
	}
	printf("�հ�:%d\n", sum);
	return 0;
}