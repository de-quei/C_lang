#include <stdio.h>
int main() {
	int sum = 0;
	int cnt = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0 && i % 5 == 0) {
			printf("%d", i);
			sum += 1;
			cnt += i;
		}
	}
	printf("°ª : %d\n", sum); 
	printf("ÇÕ°è : %d", cnt);
}