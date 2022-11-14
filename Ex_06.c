/*산수 퀴즈_02 : 100미만의 연속된 두 자릿수의 짝수 3개를 곱하였더니,
				 4****2가 되었다.
				 이 세 개의 수는 어떤 수인지, 그리고 결과는 얼마인지 구하는 프로그램을
				 for문을 이용하여 작성하시오.*/
#include <stdio.h>
void main() {
	int number;
	for (int i = 10; i < 100; i+=2) {
		number = i * (i + 2) * (i + 4);
		if (number / 100000 == 4 && number%10 == 2) {
			printf("%d * %d * %d = %d\n", i, (i + 2), (i + 4), number);
		}
	}
	
}