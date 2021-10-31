#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//struct 구조체 배열로 만들기
struct Student {
	int number;  //번호(멤버변수 - 초기화하지 않음)
	char name[20];  //이름
	double weight;  //번호
};


int main() {
	//배열객체변수(힙 영역 사용)
	struct Student s[3] = {
		{101,"강하늘1",50.2},
		{102,"강하늘2",60.2},
		{103,"강하늘3",70.2},
	};

	int i; 

	for (i = 0; i < 3; i++) {
		printf("학번:%d\n", s[i].number);
		printf("이름:%s\n", s[i].name);
		printf("몸무게:%3.1lf\n", s[i].weight);
	}
	
	return 0;

}