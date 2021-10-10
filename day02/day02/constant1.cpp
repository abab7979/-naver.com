int main() {
	//학점을 판정하는 프로그램
	//90점이상이면 A, 80점이상이면 B, 70점이상이면 C, 60점이상이면 D, 미만이면 F

	int score = 77;
	int ch = "A';

		if (score >= 90) {
			ch = "A";
		}
		else if (score >= 80) {
			ch = "B";
		}
		else if (score >= 70) {
			ch = "C";
		}
		else if (score >= 60) {
			ch = "D";
		}

		else {
			ch = "F";
		}

	printf("학점은 %s입니다.\n", ch);

	return 0;

}