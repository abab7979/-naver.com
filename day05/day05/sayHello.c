#include <stdio.h> 


void sayHello(char name[]) {
	printf("hello~~%s\n", name);
}

void sayHello2(char* name) {
	printf("hello~~%s\n", name);
}


int main() {
	sayHello("sunny"); //배열호출, 간접주소
	sayHello("hyunsoo");//포인터호출, 간접주소

	return 0;

}