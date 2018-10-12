#include<stdio.h>
#include<stdlib.h>
int main() {
	int i, j,k;
	//printf("|");
	for (i = 1; i < 10; i++) {
		//printf("%3d", i);
		//putchar('\n');
		//puts("----------------------");
		//printf("%d |", i);
		for (j = 1; j < 10; j++) {
			k = i * j;
			printf("%d*%d=%d \t",i, j, k);
		//	putchar('\n');
		}
		printf("\n");
	}
	system("pause");
	return 0;
}