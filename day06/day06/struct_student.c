#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//struct ����ü �ڷ����� ����
struct Student {
	int number;  //��ȣ(������� - �ʱ�ȭ���� ����)
	char name[20];  //�̸�
	double weight;  //��ȣ

};


int main() {
	struct Student s1;  //��ü����(�� ���� ���)
	struct Student s2;
	s1.number = 101;
	//s1.name = "���ϴ�"; ������ �Ʒ��Լ������
	strcpy(s1.name,"���ϴ�");
	s1.weight = 62.3;

	//s2 �����ϱ�
	s2.number = 101;
	strcpy(s2.name, "��");
	s2.weight = 62.3;

	printf("�й�:%d\n", s1.number);
	printf("�̸�:%s\n", s1.name);
	printf("������:%3.1lf\n", s1.weight);
	printf("�й�:%d\n", s2.number);
	printf("�̸�:%s\n", s2.name);
	printf("������:%3.1lf\n", s2.weight);

	return 0;

}