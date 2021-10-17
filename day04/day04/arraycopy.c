#include <stdio.h>

int main() {
	//배열의 복사

	char a1[] = "TEN";
	char a2[4];
	char a3[4];
	int i;

	//배열 a1을 a2에 저장

	for (i = 0; i < 4; i++) {
		a2[i] = a1[i];
	}

	//출력
	printf("%s\n", a1);
	printf("%s\n", a2);

	//a1을 a2에 거꾸로 복사(저장)
	for (i = 0; i < 4; i++) {
		a2[i] = a1[2-i];
	}
	a2[3] = '\0';//이거 안넣으면 에러

	printf("%s\n", a2);

	return 0;
}