//���� �߻� ���� �� ����
#include <stdio.h>
#include <stdlib.h>//rand() �Լ��� ����ϱ� ���� ��� �߰�
#include <time.h>
int main() {
	//�ּ�1 : ������ ������ ���� ������ �߻��Ѵٴ� ������
	/*printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());*/

	//�ּ�2 : srand(�õ尪)�� �̿��Ͽ� ���� �߻�
	/*srand(23); //�õ尪�� �����ϸ� ������ ����
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

	printf("�̹� �� ����� ��÷��ȣ��? \n");
	for (int i = 1; i <= 6; i++) {
		printf("%d\t", rand() % 45 + 1);
	}
}