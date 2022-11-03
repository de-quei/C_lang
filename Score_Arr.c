#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	
	int arr[2][3] = {0};
	int sum[2] = { 0 };
	double avg[2] = { 0.0 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
			sum[i] += arr[i][j];
			avg[i] = (double)sum[i] / 3;
		}
		printf("\n");
	}
	printf("        국어 영어 수학\n");
	for (int i = 0; i < 2; i++) {
		printf("학생 %d : ", i + 1);
		for (int j = 0; j < 3; j++) {
			printf(" %d", arr[i][j]);
		}
		printf("\n");
	}
	printf("         총합 평균 \n");
	for (int i = 0; i < 2; i++) {
		printf("학생 %d : ", i + 1);
		printf("%d %.1f\n", sum[i], avg[i]);
	}

	return 0;
}
