#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//struct ����ü �迭�� �����
struct Three_D{
	//3���� ��ǥ
	int x,y,z; 
};


int main() {
	struct Three_D d3;
	struct Three_D d4;
	d3.x = 100;
	d3.y = 200;
	d3.z = 300;
	//����ü ��ü ����
	d4 = d3;         //d3�� d4�� ����
	printf("x��ǥ : %d,  x��ǥ : %d,  x��ǥ : %d\n", d3.x, d3.y, d3.z);
	printf("x��ǥ : %d,  x��ǥ : %d,  x��ǥ : %d\n", d4.x, d4.y, d4.z);
		
	return 0;

}