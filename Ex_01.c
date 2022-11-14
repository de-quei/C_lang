//사각형의 가로와 세로를 입력받아 넓이를 구하는 프로그램
#include <stdio.h>
int main() {

	int width, height;
	int res;

	printf("가로 길이 입력 : ");
	scanf_s("%d", &width);
	printf("세로 길이 입력 : ");
	scanf_s("%d", &height);

	res = width * height;

	printf("가로 : %d 세로 : %d, 넓이 : %d",width, height, res);
	return 0;
}