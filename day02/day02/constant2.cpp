#include<stdio.h>
#define PI 3.1415 //��ũ�� ���
#define MIN_NUM 1 //�������¹����const�� �����ϰų� 
//#defin���� �ϴ� ��� 2����..����� ���ڷ� ������Ÿ���°ͺ��� �̸��� �ٿ� ����ϴ°��� ����. 
//�ѹ������صθ� �� ���α׷��� ����ɶ����� ���� ����ɼ����°�, ����̸��� �빮�ڷ� ���������� ���
#define MAX_NUM 2

int main() {
	int r = 5;
	float area;

	area = PI * r * r;
	printf("���ǳ��� :%.2f\n", area);

	//MIN_NUM=10; �����³��� �ʴµ� ���� �ٲ��� ���� ������ �����ؼ�

	printf("�ּҰ� :%d\n", MIN_NUM);
	printf("�ִ밪 :%d\n", MAX_NUM);

	return 0;

}