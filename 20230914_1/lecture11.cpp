#include <stdio.h>
int main(void) {
	
	int i, j;

	while (i <= 9) {
		
		if (i == 5) {
			i++;
			continue;
		}

		while (j <= 9) {
			printf("%d * %d = %d", i, j, i * j);
			j++;
		}

		i++;
		j = 1;
	}
}