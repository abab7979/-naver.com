/*#include <stdio.h>

int main() {

	FILE* fout;
	int i = 0;

	fopen_s(&fout, "Ascii.txt", "wt");  //���Ͽ���
	if (fout == NULL) {
		puts("������ ������ �� �����ϴ�.");
		return -1;   // exit(-1)�� �ٷ� �����Ű�°�, �̰;��� �ȵ�. ������.
	}
									 
	//���Ͼ���

	puts("***ASCII ���̺� �ۼ�***");
	for (i = 1; i < 128; i++) {
		if (i % 10 == 0) { //10������ �ٹٲ� �߻�
			fputc('\n', fput);
		}
		fputc(i, fout);
		fputc('\t', fout);

	}



	fclose(fout);  //��������
	return 0;
}*/