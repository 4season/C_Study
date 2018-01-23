#include <stdio.h>
int main() {
	int i=1, sum=0;
	for(i;;i++) {
		sum = sum+i;
		if(i>100) {
			printf("그럴리가 ㅋ\n");
			break;
		}
		printf("무한루프입니다.");
	printf(" x%d\n", i, sum);
	}
	return 0;
}
