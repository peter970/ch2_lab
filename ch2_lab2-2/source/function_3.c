#include<stdio.h>
#include<stdlib.h>
int peter_3() {
	int i, j;
	int a, b;
	a = 4; b = 5;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i == 4 || j == a || j == b)
				printf("X");
			else
				printf("-");
		}
		printf("\n");
		a--;
		b++;
	}
}