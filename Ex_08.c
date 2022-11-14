#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	srand((unsigned int)time(NULL));
	int index, temp;
	int lotto[6];
	int l1, l2, l3, l4, l5, l6;

	l1 = rand() % 45 + 1;
	do {
		l2 = rand() % 45 + 1;
	} while (l1 == l2);

	do {
		l3 = rand() % 45 + 1;
	} while (l3 == l1 || l3 == l2);

	do {
		l4 = rand() % 45 + 1;
	} while (l4 == l3 || l4 == l2 || l4 == l1);

	do {
		l5 = rand() % 45 + 1;
	} while (l5 == l4 || l5 == l3 || l5 == l2 || l5 == l1);

	do {
		l6 = rand() % 45 + 1;
	} while (l6 == l5 || l6 == l4 || l6 == l3 || l6 == l2 || l6 == l1);

	//printf("이번주 행운의 숫자는? : %d  %d  %d  %d  %d  %d 입니다!", l1, l2, l3, l4, l5, l6);

	lotto[0] = l1;
	lotto[1] = l2;
	lotto[2] = l3;
	lotto[3] = l4;
	lotto[4] = l5;
	lotto[5] = l6;

	for (int i = 0; i < 5; i++) {
		int index = i;
		for (int j = i + 1; j < 6; j++) {
			if (lotto[index] > lotto[j]) {
				index = j;
			}
		}
		temp = lotto[i];
		lotto[i] = lotto[index];
		lotto[index] = temp;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", lotto[i]);
	}
	
	return 0;
}