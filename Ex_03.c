/*ö���� ����� ����� ������ �ִ�.
ö���� ���񿡰� ����� �� �� �ָ� ö���� ������ ��� ������ ��������.
���� ö������ ����� �� �� �ָ� ö���� ���� ����� �ι踦 ������ �ȴ�.
ó�� ö���� ����� ���� ��� ����� ������ �־��°�?
��, �� ����� ������ 100�� �����̴�.*/
#include <stdio.h>
void main() {
	int cheolsu, yunghee;

	for (cheolsu = 1; cheolsu <= 100; cheolsu++) {
		for (yunghee = 1; yunghee <= 100; yunghee++) {
			if ((cheolsu - 1) == (yunghee + 1)&&(cheolsu + 1) == (yunghee - 1) * 2) {
					printf("ö�� = %d, ���� = %d\n", cheolsu, yunghee);
				
			}
			
		}//���� for��
		
	}
}