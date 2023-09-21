#include <stdio.h>

void sum(double a, double b) {
	double result = a + b;
	printf("%lf + %lf = %lf", a, b, result);
}

void sub(double a, double b) {
	double result = a - b;
	printf("%lf - %lf = %lf", a, b, result);
}

void mul(double a, double b) {
	double result = a * b;
	printf("%lf * %lf = %lf", a, b, result);
}

void div(double a, double b) {
	double result = a / b;
	printf("%lf / %lf = %lf", a, b, result);
}

void calculation(int selector) {

	double num1, num2;

	printf("���� 1�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num1);

	printf("���� 2�� �Է��Ͻÿ� : ");
	scanf_s("%lf", &num2);

	if (selector == 1) sum(num1, num2);
	else if (selector == 2) sub(num1, num2);
	else if (selector == 3) mul(num1, num2);
	else if (selector == 4) div(num1, num2);
}

int main(void) {

	int sel;

	printf("1.���ϱ� 2.���� 3.���ϱ� 4.������ : ");
	scanf_s("%d", &sel);
	calculation(sel);
	return 0;

}