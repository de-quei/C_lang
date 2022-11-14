//난수 발생 관련 총 정리
#include <stdio.h>
#include <stdlib.h>//rand() 함수를 사용하기 위해 헤더 추가
#include <time.h>
int main() {
	//주석1 : 실행할 때마다 같은 난수가 발생한다는 문제점
	/*printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());*/

	//주석2 : srand(시드값)을 이용하여 난수 발생
	/*srand(23); //시드값을 변경하면 난수값 변경
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());*/

	//printf("%d\n", (unsigned int)time(NULL));

	srand((unsigned int)time(NULL));
	/*printf("%d\n", rand() % 10 + 1);
	printf("%d\n", rand() % 10 + 1);
	printf("%d\n", rand() % 10 + 1);
	printf("%d\n", rand() % 45 + 1);
	printf("%d\n", rand() % 45 + 1);
	printf("%d\n", rand() % 45 + 1);*/

	printf("이번 주 행운의 당첨번호는? \n");
	for (int i = 1; i <= 6; i++) {
		printf("%d\t", rand() % 45 + 1);
	}
}