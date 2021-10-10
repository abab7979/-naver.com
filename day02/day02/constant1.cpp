#include<stdio.h>

int main(){
	//상수-const
	const int MIN_NUM = 1; //상수일때는 대문자로사용 관례
	const int MAX_NUM = 100;
	const float PI = 3.1415; //상수PI에 3/1415를 저장함
	int radius = 5;//변수 radius에 5를 저정함
	float area;

	// MIN_NUM = 10; 상수로 선언했으면 변경할수없어서 에러뜸
	// max_num = 1000; 상수는 변경할 수 없음. 3.1415 1년은12개월 이런것들.변수처럼보이나  const있으면 상수임.

	printf("%d\n", MIN_NUM);
	printf("%d\n", MAX_NUM);

	//원의 넓이 계산하기 : PI*반지름*반지름
	area = PI * radius * radius;
	printf("원의넓이:%.2f\n", area);
    return 0;

}