#include <stdio.h>
void main() {

	int radius;
	float area, round;
	const float pi = 3.141592;

	printf("** ���� ���̿� �ѷ� ** \n");
	printf("�������� ���� �Է� �� : ");
	scanf_s("%d", &radius);
	area = radius * radius * pi;
	round = 2 * radius * pi;

	printf("���� ���� : %.2f\n", area);
	printf("���� �ѷ� : %.2f", round);
}
