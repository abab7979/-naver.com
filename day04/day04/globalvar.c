#include <stdio.h>


void price();
int quantity = 2; //전역변수

int main() {
	printf("%d개에\n",quantity);

	price();

	return 0;

}

void price(){

	int price = 10000*quantity;         //지역변수, 블럭을 벗어나면 소멸
	

	printf("%d원입니다.\n", price);
}