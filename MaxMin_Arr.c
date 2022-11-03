#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int arr[2][3];
	int max = INT_MAX, min = INT_MIN;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf_s("%d", &arr[i][j]);
			if (max < arr[i][j]) {
				max = arr[i][j];
			}
			if (min > arr[i][j]) {
				min = arr[i][j];
			}
		}
		printf("\n");
	}
	
	printf("최댓값 : %d, 최소값 : %d", max, min);
	return 0;
}
