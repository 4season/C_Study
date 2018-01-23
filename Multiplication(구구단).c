#include <stdio.h>
int main() {
	int a, b;
	for(a=1; a<=9; a++) {
		for(b=2; b<=9; b++) {
			int c = a*b;
			printf("%d단 : %d * %d = %d\n",a, a, b, c);
		}
		printf("\n");
		}
		return 0;
  }
