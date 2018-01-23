#include <stdio.h>
int main() {
	int su;
	printf("정수 0~6 사이 숫자 입력 ==> ");
	scanf("%d", &su);
	switch(su) {
	case 0 : printf("Sunday\n"); break;
	case 1 : printf("Monday\n"); break;
	case 2 : printf("Tuesday\n"); break;
	case 3 : printf("Wednesday\n"); break;
	case 4 : printf("Thursday\n"); break;
	case 5 : printf("Friday\n"); break;
	case 6 : printf("Saturday\n"); break;
	default : printf("입력 데이터 오류\n"); break;
	}
	return 0;
}
