#include <stdio.h>

int main() { 
	//printf("int형=%dByte\n",sizeof(int)); 4Byte=-32bit

	//자기소개 - 이름,나이,키,전화번호
	printf("===자기소개===%c\n");
	printf("이름:%s\n", "홍길동");
	printf("나이:%d\n", 30);//정수4출력
	printf("키:%.1f\n", 160.5);//실수2.54출력
	printf("전화번호:%s", "000-0000-0000");
	return 0;//운영체제로 0을 반환해서 프로그램을 종료한다.
}