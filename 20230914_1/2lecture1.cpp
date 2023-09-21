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

	printf("소수인지 확인할 수를 입력하세요 : ");
	scanf_s("%d", &num);

	if (cal(num) == 1) {
		printf("해당 수는 소수입니다.");
	}
	if (cal(num) == 0) {
		printf("해당 수는 소수가 아닙니다.");
	}
}