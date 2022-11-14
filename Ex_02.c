#include <stdio.h>
void main() {

	int radius;
	float area, round;
	const float pi = 3.141592;

	printf("** 원의 넓이와 둘레 ** \n");
	printf("반지름에 대한 입력 값 : ");
	scanf_s("%d", &radius);
	area = radius * radius * pi;
	round = 2 * radius * pi;

	printf("원의 넓이 : %.2f\n", area);
	printf("원의 둘레 : %.2f", round);
}
