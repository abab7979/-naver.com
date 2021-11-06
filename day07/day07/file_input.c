/*#include <stdio.h>

int main() {

	FILE* fp;   //파일 포인터 생성
	fopen_s(&fp, "hello.txt", "r");   //쓰기모드 - "w", "wt" 도 사용가능


	if (fp == NULL) { //예외처리 필수
		puts("파일을 열 수 없습니다.");  //puts(문자열)
		return -1;
	}
	
	int ch = 0;
	while ((ch = fgetc(fp)) != EOF) {
		putchar(ch);
	}

	while (1) {
		int ch = fgetc(fp);
		if (ch == EOF) break;
		//putchar(ch);
		printf("%c", ch);
	}
	fclose(fp);
	return 0;
}*/