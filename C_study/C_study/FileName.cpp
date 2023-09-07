#include <stdio.h>
int main()
{
	int n;
	scanf_s("%d", &n);

	printf("%d층 피라미드\n", n);

	for (int a = 0; a < n; a++) {

		for (int b = a; b <= n; b++) {
			printf(" ");
		}

		for (int c = 0; c <= (a * 2); c++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}