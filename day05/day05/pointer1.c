#include <stdio.h> //에러남


int main() {
	char ch = 'j';
	int iNum = 11;
	char* cp;//문자형 포인터 cp선언
	int* ip; //정수형 포인터 ip선언


	cp = &ch; //포인터에 ch의 주소 저장
	ip = &iNum;//포인터에 iNum의 주소 저장

	printf("%x,%c\n", cp,*cp); //cp의 값, *cp의 값은  cp주소에 저장된 값인 j가 출력됨
	printf("%d %d\n", sizeof(ch), sizeof(cp)); //1바이트 4바이트
	//포인터 자료형의 크기는 모두 4바이트

	printf("%x,%d\n", ip, *ip); //ip의 값, *ip의 값은  ip주소에 들어있는 값인 11가 출력됨
	printf("%d %d", sizeof(iNum), sizeof(ip)); //1바이트 4바이트


	return 0;

}