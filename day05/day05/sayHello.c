#include <stdio.h> 


void sayHello(char name[]) {
	printf("hello~~%s\n", name);
}

void sayHello2(char* name) {
	printf("hello~~%s\n", name);
}


int main() {
	sayHello("sunny"); //�迭ȣ��, �����ּ�
	sayHello("hyunsoo");//������ȣ��, �����ּ�

	return 0;

}