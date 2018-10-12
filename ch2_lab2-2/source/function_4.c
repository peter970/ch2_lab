#include<stdio.h>
#include<stdlib.h>
int peter_4() {
	int i, j;
	int a, b;
	printf("<4> \n");
	a = 0; b = 9;
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (i < 5 && (i == 0 || j == a || j == b))
				printf("X");
			else
				printf("-");
		}
		printf("\n");
		a++;
		b--;
	}
}