#include <stdio.h>
int main() {
	int i = 1, count = 1, total = 0;
	while (i <= 99) {
		if (count % 2 == 0) {
			printf("%d ", i);
			total = total + i;
		}
		else {
			printf("-%d ", i);
			total = total - i;
		}
		
		//printf("%d\n", count);
		i+=2;
		count++;
	}
	printf("\n");
	printf("гу╟Х : %d", total);
}