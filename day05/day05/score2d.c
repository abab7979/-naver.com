#include <stdio.h> 


int main() {
	/*학생 5명의 수학, 영어 점수의 합계와 평균*/
	
	int x, y; //반복변수
	int score[5][2] = { {75,80},{80,95},{90,100},{70,90},{85,55} };
	
	int  total[2] = { 0,0 };//합계저장
	double avg[2]= { 0.0,0.0 };//평균저장
	
	//출력
	for (x = 0; x < 5; x++) {
		for (y = 0; y < 2; y++) {
			printf("%d ", score[x][y]);
		}
		printf("\n"); //줄바꿈
	}

	//합계
	for (x = 0; x < 5; x++) {
		total[0] = total[0] + score[x][0];//수학점수
		total[1] = total[1] + score[x][1];//영어점수
	}
	//평균 
	avg[0] = (double)total[0] / 5;
	avg[1] = (double)total[1] / 5;


	printf("수학합계:%d\n", total[0]);
	printf("영어합계:%d\n", total[1]);
	printf("수학평균:%3.1lf\n",avg[0]);
	printf("영어평균:%3.1lf\n", avg[1]);

	return 0;

}



