#include <stdio.h>
int main(void) {

	int score;

	printf("���� �Է� : ");
	scanf_s("%d", &score);

	if (score > 100 || score < 0) {
		printf("�߸� �Էµ� ���Դϴ�.");
		return 0;
	}

	switch (score / 10) {

	case 10:
	case 9:
		printf("A����Դϴ�.");
		break;
	case 8:
		printf("B����Դϴ�.");
		break;
	case 7:
		printf("C����Դϴ�.");
		break;
	case 6:
		printf("D����Դϴ�.");
		break;
	default:
		printf("F����Դϴ�.");
	}
}