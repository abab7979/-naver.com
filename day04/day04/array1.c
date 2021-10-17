#include <stdio.h>

int main() {
	int a[3];
	int i;
	int sum=0;

	a[0] = 0;
	a[1] = 20;
	a[2] = 30;

	//배열의 주소,4바이트씩 증가함. 배열은 1개당 4바이트차지
	//배열의 이름(a)은 배열의 시작주소와 같다.
	printf("%x,%x,%x\n",&a[0],&a[1],&a[2]);
	printf("%x,%x,%x\n", a, a+1, a+2);
	for (i = 0; i < 3; i++) {
		printf("%d\n", a[i]);

	}
	//메모리의 크기 1개당 4바이트, 여기에선 0,1,2이니까 12바이트임
	printf("a배열의 메모리 크기는 %dbyte\n",sizeof(a));

	//합계
	//printf("%d\n", a[0]+a[1]+a[2]);
	for (i = 0; i < 3; i++) {
		sum += a[i];
	}
	printf("합계:%d\n", sum);

	return 0;
}