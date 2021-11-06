/*#include <stdio.h>

int main() {

	FILE* fout;
	fopen_s(&fp, "hello2.txt", "a");  //추가쓰기 = "a"모드 사용
	if (fp == NULL) { //예외처리 필수
		puts("파일을 열수없습니다.");  //puts(문자열)
		return -1;
	}
	
	fprintf(fout, "안녕하세요~\n");
	//fprintf(fout, "좋은하루 되세요~\n");

	fclose(fout) //파일종료
	retutn 0;
}*/