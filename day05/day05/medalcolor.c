#include <stdio.h> 

int main() {

	int ranking = 1;
	char *medalColor;

	switch (ranking) {

	case 1:
		medalColor = "gold";
		break;
	case 2:
		medalColor = "silver";
		break;
	case 3:
		medalColor = "bronze";;
		break;
	default:
		medalColor = "none";
		break;
	}
	
	printf("%d등 메달의 색상은 %s입니다.\n", ranking, medalColor);

	return 0;
}
