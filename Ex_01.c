//�簢���� ���ο� ���θ� �Է¹޾� ���̸� ���ϴ� ���α׷�
#include <stdio.h>
int main() {

	int width, height;
	int res;

	printf("���� ���� �Է� : ");
	scanf_s("%d", &width);
	printf("���� ���� �Է� : ");
	scanf_s("%d", &height);

	res = width * height;

	printf("���� : %d ���� : %d, ���� : %d",width, height, res);
	return 0;
}