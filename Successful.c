#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[5][4];
	int i, j;
	int sum[5] = {0}, count = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			scanf("%d", &arr[i][j]);
			
		}
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 4; j++) {
			sum[i] += arr[i][j];
		}
		if (sum[i] / 4 >= 80) {
			printf("pass\n");
			count++;
		}
		else {
			printf("fail\n");
		}
	}
	
	printf("successful : %d", count);
	return 0;
}
