#include <stdio.h>

int main(void) {

	int a, y;
	printf("���� �Է� : ");
	scanf_s("%d", &y);

	a = (y % 4 == 0) || ((y % 400 == 0) && (y % 100 != 0));

	if (a == 1) {
		printf("�����Դϴ�.");
	}
	else {
		printf("������ �ƴմϴ�.");
	}

}