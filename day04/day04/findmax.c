#include <stdio.h> //������

int findMax(int[], int);
int findMaxIdx(int[], int);

int main() {
	//�ִ밪 ã��
	int num[] = { 21,35,72,2,66,97 };

	int maxVal = findMax(num, 7);
	int maxIdx = findMaxIdx(num, 7);

	printf("�ִ밪:%d\n", maxVal); //100
	printf("�ִ밪�� ����:%d\n", maxIdx); //3
	return 0;
}

int findMax(int num[],int len) {
	//�ִ밪 ã��
	int max=num[0];
	int i;
	
	//�ݺ��ϸ鼭 ��
	for (i = 1; i < len; i++) {
		if (max < num[i]){
			max = num[i];
			}
	}
	return max;
}

int findMaxIdx(int num[], int len) {//�ִ밪�� ��ġ
	int maxIdx = 0;
	int i;


	for (i = 0; i < len; i++) {
		if (num[maxIdx] < num[i])
			maxIdx = i;
	}
	return maxIdx;

}