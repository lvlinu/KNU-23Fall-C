#include <stdio.h>
int main(void) {
	int jumsu;

	printf("점수 입력 : ");
	scanf_s("%d", &jumsu);

	if (jumsu > 100 || jumsu < 0) {
		printf("잘못 입력된 값입니다.");
	}
	else if (jumsu >= 90) {
		printf("A 학점");
	}
	else if (jumsu >= 80) {
		printf("B 학점");
	}
	else if (jumsu >= 70) {
		printf("C 학점");
	}
	else if (jumsu >= 60) {
		printf("D 학점");
	}
	else {
		printf("F 학점");
	}
}