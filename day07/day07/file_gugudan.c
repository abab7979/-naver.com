/*#include <stdio.h>

int main() {

	FILE* fout;
	int i, j;

	fopen_s(&fout, "gugudan.txt", "w");  //추가쓰기 = "a"모드 사용
	if (fout == NULL) { //예외처리 필수
		puts("파일을 생성할 수 없습니다.");  //puts(문자열)
		return -1;
	}

	//구구단 쓰기
	for (i = 1; i < 10; i++) {
		for (j = 1; j < 10; j++) {
			fprintf(fout, "%d x %d = %d\n", i, j, (i * j));
		}
		fprintf(fout, "n"); //문자열로 표기-'n' 사용안함 주의
	}


	fclose(fout); //파일종료

	return 0;
}*/