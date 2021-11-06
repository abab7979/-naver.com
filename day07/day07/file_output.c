/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	FILE* fp;   //파일 포인터 생성
	fp = fopen("hello.txt", "w");

	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fputc('\n', fp); //개행 - 줄바꿈 문자
	
	fclose(fp);

	return 0;
}*/