#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand((unsigned int)time(NULL));
	int random = rand() % 100 + 1;
	printf("%d\n", random);
	int cnt = 0;

	while (1) {
		int u_num = 0;
		cnt++;
		printf("1~100 정수 중 랜덤 정수를 맞춰보세요! : ");
		scanf_s("%d", &u_num);

		if (random < u_num) {
			printf("그 보다 더 작은 숫자입니다.\n");
		}
		else if (random > u_num) {
			printf("그 보다 더 큰 숫자입니다.\n");
		}
		else {
			printf("정답입니다.\n");
			break;
		}
	}
	printf("%d회만에 맞추셨습니다.\n", cnt);

	if (cnt <= 4) {
		printf("<Great>!\n");
	}
	else if (cnt <= 8) {
		printf("<Good!>\n");
	}
	else {
		printf("<try the best>\n");
	}
}
