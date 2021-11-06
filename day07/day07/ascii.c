/*#include <stdio.h>

int main() {

	FILE* fout;
	int i = 0;

	fopen_s(&fout, "Ascii.txt", "wt");  //파일열기
	if (fout == NULL) {
		puts("파일을 생성할 수 없습니다.");
		return -1;   // exit(-1)은 바로 종료시키는것, 이것쓰면 안됨. 사용안함.
	}
									 
	//파일쓰기

	puts("***ASCII 테이블 작성***");
	for (i = 1; i < 128; i++) {
		if (i % 10 == 0) { //10개마다 줄바꿈 발생
			fputc('\n', fput);
		}
		fputc(i, fout);
		fputc('\t', fout);

	}



	fclose(fout);  //파일종료
	return 0;
}*/