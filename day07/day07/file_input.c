/*#include <stdio.h>

int main() {

	FILE* fp;   //���� ������ ����
	fopen_s(&fp, "hello.txt", "r");   //������ - "w", "wt" �� ��밡��


	if (fp == NULL) { //����ó�� �ʼ�
		puts("������ �� �� �����ϴ�.");  //puts(���ڿ�)
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