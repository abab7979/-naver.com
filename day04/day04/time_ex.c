#include <stdio.h>
#include <time.h>
#include <Windows.h>

int main() {

	long t, start, end;
	t= time(NULL);          //time_t = time(NULL);로 선언해도 됨. time_t는 시간자료형
	int i;
	
	
	printf("%ld초\n", t);//%d, %ld(long decimal)
	//1634441633초로 나오는것, 1970년1월1일 자정부터 현재까지 시간

	//1부터 10까지 출력(대기시간을 도입)
	//sleep(1000) -> 1초 <window.h> include

	start = time(NULL); //시작시간

	for (i = 1; i <= 100; i++) {
		printf("%d\n", i);
		Sleep(20);          //0.02초
	}
	end = time(NULL);

	double diff_timer = (double)(end-start);
	printf("수행시간 : %lf\n", diff_timer);


	return 0;
}