#include <stdio.h>


int square(int);
int add(int);
int main() {

	int result = square(4);
	printf("%d\n", result);
	
	int result2 = add(4,5);
	printf("%d\n", result2);


	return 0;

}
//������ ���ϱ�
int square(int x) {
	return x * x;
}
//�� ���� ���ϴ� �Լ�
int add(int x,int y) {
	return x * y;
}