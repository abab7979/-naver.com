#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main() {

	long t, start, end;
	t= time(NULL);          //time_t = time(NULL);�� �����ص� ��. time_t�� �ð��ڷ���
	int i;
	
	
	printf("%ld��\n", t);//%d, %ld(long decimal)
	//1634441633�ʷ� �����°�, 1970��1��1�� �������� ������� �ð�

	//1���� 10���� ���(���ð��� ����)
	//sleep(1000) -> 1�� <window.h> include

	start = time(NULL); //���۽ð�

	for (i = 1; i <= 100; i++) {
		printf("%d\n", i);
		Sleep(20);          //0.02��
	}
	end = time(NULL);

	double diff_timer = (double)(end-start);
	printf("����ð� : %lf\n", diff_timer);


	return 0;
}