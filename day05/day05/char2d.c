#include <stdio.h> 


int main() {
	//char name[6]="sunny"; - 1차원배열(개수6개)

	char name[4][10] = {
		"sunny",
		"hyunsoo",
		"soomi",
		"youngsang"
	};
	int i;


	printf("%x, %s\n", &name[0], name[0]);
	printf("%x, %s\n", name, name);

	//전체출력
	for (i = 0; i < 4; i++) {
		printf("% s\n", name[i]);
	}
	return 0;

}