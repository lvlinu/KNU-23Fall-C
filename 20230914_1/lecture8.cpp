#include <stdio.h>
int main(void) {

	int score;

	printf("점수 입력 : ");
	scanf_s("%d", &score);

	if (score > 100 || score < 0) {
		printf("잘못 입력된 값입니다.");
		return 0;
	}

	switch (score / 10) {

	case 10:
	case 9:
		printf("A등급입니다.");
		break;
	case 8:
		printf("B등급입니다.");
		break;
	case 7:
		printf("C등급입니다.");
		break;
	case 6:
		printf("D등급입니다.");
		break;
	default:
		printf("F등급입니다.");
	}
}