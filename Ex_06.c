/*��� ����_02 : 100�̸��� ���ӵ� �� �ڸ����� ¦�� 3���� ���Ͽ�����,
				 4****2�� �Ǿ���.
				 �� �� ���� ���� � ������, �׸��� ����� ������ ���ϴ� ���α׷���
				 for���� �̿��Ͽ� �ۼ��Ͻÿ�.*/
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