#include<stdio.h>
#include<stdlib.h>
int peter_2() {
	int i, j;
	printf("<2> \n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == 0 || i == 1 || i == 2 || i == 1 || i == 7 || i == 8 || i == 9 || j == 0 || j == 1 || j == 2 || j == 7 || j == 8 || j == 9)
				printf("X");
			else
				printf("-");
		}
		printf("\n");
	}
}
