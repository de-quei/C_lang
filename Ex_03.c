/*철수와 영희는 사과를 가지고 있다.
철수가 영희에게 사과를 한 개 주면 철수와 영희의 사과 갯수는 같아진다.
영희가 철수에게 사과를 한 개 주면 철수는 영희 사과의 두배를 가지게 된다.
처음 철수와 영희는 각각 몇개의 사과를 가지고 있었는가?
단, 총 사과의 갯수는 100개 이하이다.*/
#include <stdio.h>
void main() {
	int cheolsu, yunghee;

	for (cheolsu = 1; cheolsu <= 100; cheolsu++) {
		for (yunghee = 1; yunghee <= 100; yunghee++) {
			if ((cheolsu - 1) == (yunghee + 1)&&(cheolsu + 1) == (yunghee - 1) * 2) {
					printf("철수 = %d, 영희 = %d\n", cheolsu, yunghee);
				
			}
			
		}//영희 for문
		
	}
}