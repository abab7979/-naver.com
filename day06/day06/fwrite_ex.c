#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {

	FILE* fp;   //파일 스트림 생성
	fp = fopen("hello.txt", "w");   //w-쓰기모드

	fputs("hello~ C", fp);   //데이터 입력

	fclose(fp);     //종료 파일받기

	return 0;
}