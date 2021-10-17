#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int dice,i;

	//rand함수 - #include <stdlib.h>
	//srand(seed)함께 사용-seed 배정
	//srand(5);
	srand(time(NULL));//시간이 흐르므로 seed값이 변경됨
	
	srand(time(NULL));//시간이 흐르므로 seed값이 변경됨
	printf("%d\n", rand()); //seed값을 으로 해야 됨. 안쓰고 그냥 printf만 쓰면 첫번째는 계속 41이 나옴.
	//printf("%d\n", rand());
	//printf("%d\n", rand());

	//주사위 만들기 - 10번 던지기
	for (i = 0; i < 10; i++) {
		dice = rand() % 6 + 1; //1~6까지 생성
		printf("주사위 눈 : %d\n", dice);
	}
	return 0;
}
 