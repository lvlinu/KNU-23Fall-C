#include <stdio.h>
int main(void) {
	int jumsu;

	printf("���� �Է� : ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0) {
		printf("�߸� �Էµ� ���Դϴ�.");
	}
	else if (jumsu >= 90) {
		printf("A ����");
	}
	else if (jumsu >= 80) {
		printf("B ����");
	}
	else if (jumsu >= 70) {
		printf("C ����");
	}
	else if (jumsu >= 60) {
		printf("D ����");
	}
	else {
		printf("F ����");
	}
}