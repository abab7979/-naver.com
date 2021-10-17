#include <stdio.h>

int main() {
	int arr[] = { 10,20,30,40 };
	int i;
	int sum = 0;
	//30을 출력
	printf("arr[2]=%d\n", arr[2]);

	//전체출력
	for (i = 0; i < 4; i++) {
		printf("%3d", arr[i]); 

	}
	printf("\n");
	//합계
	for (i = 0; i < 4; i++) {
		sum += arr[i];
	}
	printf("합계:%d\n", sum);
	return 0;
}