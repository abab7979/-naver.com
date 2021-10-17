#include <stdio.h>


void sayHello();//프로토타입 무엇인가를 만들때 본뜨는것, <자료형 함수이름()>
void sayHello2(char[]);

int main() {

	sayHello();  //함수의 호출
	sayHello2("c++");
	sayHello2("python");
	return 0;

}
void sayHello(){//sayHello의 이름의 함수 정의. void는 반환값이 없다.void sayHello(void)로 해도 됨.
	printf("hello~c!\n");
}
void sayHello2(char lang[]) {
	printf("hello %s\n", lang);

}