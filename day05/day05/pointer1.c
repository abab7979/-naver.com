#include <stdio.h> //������


int main() {
	char ch = 'j';
	int iNum = 11;
	char* cp;//������ ������ cp����
	int* ip; //������ ������ ip����


	cp = &ch; //�����Ϳ� ch�� �ּ� ����
	ip = &iNum;//�����Ϳ� iNum�� �ּ� ����

	printf("%x,%c\n", cp,*cp); //cp�� ��, *cp�� ����  cp�ּҿ� ����� ���� j�� ��µ�
	printf("%d %d\n", sizeof(ch), sizeof(cp)); //1����Ʈ 4����Ʈ
	//������ �ڷ����� ũ��� ��� 4����Ʈ

	printf("%x,%d\n", ip, *ip); //ip�� ��, *ip�� ����  ip�ּҿ� ����ִ� ���� 11�� ��µ�
	printf("%d %d", sizeof(iNum), sizeof(ip)); //1����Ʈ 4����Ʈ


	return 0;

}