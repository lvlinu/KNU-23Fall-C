#include <stdio.h>
int main(void) {
	
	int i, j;
	i = 1;
	j = 1;
	
	for(i = 0; i < 5; i++) {
		
		for (j = 0; j < i; j++) {
			printf("  ");
		}
		
		if (i % 2 == 1) {
			printf("| O |");
		}
		else {
			printf("| X |");
		}
		
		printf("\n-------------\n");
	}
}