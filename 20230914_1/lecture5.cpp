#include <stdio.h>

int main(void) {

	int a, y;
	printf("연도 입력 : ");
	scanf_s("%d", &y);

	a = (y % 4 == 0) || ((y % 400 == 0) && (y % 100 != 0));

	if (a == 1) {
		printf("윤년입니다.");
	}
	else {
		printf("윤년이 아닙니다.");
	}

}