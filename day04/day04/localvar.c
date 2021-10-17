#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ab10(int a, int b) { //ab10함수의 지역변수
	a *= 10;   //a=a*10;
	b *= 10;   //b=b*10;
	//a=10,b=20은 맞음. 여기서만
}

int main() {
	int a, b;  //main함수의 지역변수
	a = 1; 
	b = 2;

	ab10(a,b);//ab10의 a,b가 소멸
	printf("a=%d, b=%d", a, b); //1,2  main의 a,b임

	return 0;

}