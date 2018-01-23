#include <stdio.h>

int main(void) {
	int x, y;
	printf("별찍기(세모)\n");;

	for(x=10; x>=1; x--) {
		for(y=1; y<=x; y++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
