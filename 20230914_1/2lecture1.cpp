#include <stdio.h>
int cal(int num) {
	int cnt = 0;

	for (int i = 2; i < num; i++) {
		if (num % i == 0) cnt++;
	}

	if (cnt == 0) return 1;
	else return 0;
}
int main(void) {

	int num;

	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ��� : ");
	scanf_s("%d", &num);

	if (cal(num) == 1) {
		printf("�ش� ���� �Ҽ��Դϴ�.");
	}
	if (cal(num) == 0) {
		printf("�ش� ���� �Ҽ��� �ƴմϴ�.");
	}
}