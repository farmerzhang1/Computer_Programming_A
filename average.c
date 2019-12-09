#include <stdio.h>

int main(void) {
	double score[11][5] = { 0 };
	double av[10] = { 0 };
	int i, j;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 5; j++) {
			scanf_s("%lf", &score[i][j]);
			if (score[i][j] > score[10][j]) score[10][j] = score[i][j];
		}
	}
	//first line
	for (i = 0; i < 9; i++) {
		av[i] = (score[i][0] + score[i][1] + score[i][2] + score[i][3] + score[i][4]) / 5;
		printf("%f ", av[i]);
	}
	av[9] = (score[9][0] + score[9][1] + score[9][2] + score[9][3] + score[9][4]) / 5;
	printf("%f\n", av[9]);

	//second line
	for (j = 0; j < 4; j++) {
		printf("%f ", (score[0][j] + score[1][j] + score[2][j] + score[3][j] + score[4][j] +
			score[5][j] + score[6][j] + score[7][j] + score[8][j] + score[9][j]) / 10);
	}
	printf("%f\n", (score[0][4] + score[1][4] + score[2][4] + score[3][4] + score[4][4] +
		score[5][4] + score[6][4] + score[7][4] + score[8][4] + score[9][4]) / 10);
	
	//third to last but one line
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 5; j++) {
			if (score[i][j] - score[10][j] == 0) 
				printf("%d %d\n", i, j);
		}
	}

	//last one
	double sum1 = 0, sum2 = 0;
	for (i = 0; i < 10; i++) {
		sum1 += av[i] * av[i];
		sum2 += av[i];
	}
	printf("%f", sum1 / 10 - (sum2 / 10) * (sum2 / 10));
	system("pause");
}
