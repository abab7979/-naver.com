#include <stdio.h>


void sayHello();//������Ÿ�� �����ΰ��� ���鶧 ���ߴ°�, <�ڷ��� �Լ��̸�()>
void sayHello2(char[]);

int main() {

	sayHello();  //�Լ��� ȣ��
	sayHello2("c++");
	sayHello2("python");
	return 0;

}
void sayHello(){//sayHello�� �̸��� �Լ� ����. void�� ��ȯ���� ����.void sayHello(void)�� �ص� ��.
	printf("hello~c!\n");
}
void sayHello2(char lang[]) {
	printf("hello %s\n", lang);

}