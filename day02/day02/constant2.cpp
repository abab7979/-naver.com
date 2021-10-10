#include<stdio.h>
#define PI 3.1415 //매크로 상수
#define MIN_NUM 1 //상수만드는방법은const로 선언하거나 
//#defin으로 하는 방법 2가지..상수를 숫자로 직접나타내는것보다 이름을 붙여 사용하는것이 좋다. 
//한번설정해두면 그 프로그램이 종료될때까지 결코 변경될수없는값, 상수이름은 대문자로 관례적으로 사용
#define MAX_NUM 2

int main() {
	int r = 5;
	float area;

	area = PI * r * r;
	printf("원의넓이 :%.2f\n", area);

	//MIN_NUM=10; 에러는나지 않는데 값이 바뀌지 않음 위에서 선언해서

	printf("최소값 :%d\n", MIN_NUM);
	printf("최대값 :%d\n", MAX_NUM);

	return 0;

}