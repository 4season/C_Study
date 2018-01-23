#include <stdio.h>


int main() {
	float a, b;
	int ch;

	printf("도형을 선택하시오.(1.원, 2.삼각형, 3.사각형) :");
	scanf_s("%d", &ch, 1);

	switch (ch) {
	case 1:
		printf("1. 원을 선택하셨습니다.\n");
		printf("반지름 입력 : ");
		scanf_s("%f", &a, 1);
		printf("원의 면적 = %.2f\n", a * a * 3.14);
		break;
	case 2:
		printf("2. 삼각형을 선택하셨습니다.\n");
		printf("밑변 입력 : ");
		scanf_s("%f", &a, 1);
		printf("높이입력 : ");
		scanf_s("%f", &b, 1);
		printf("삼각형릐 면적 = %.2f\n", a * b / 2);
		break;
	case 3:
		printf("3. 사각형을 선택하셨습니다.\n");
		printf("가로입력 : ");
		scanf_s("%f", &a);
		printf("세로입력 : ");
		scanf_s("%f", &b);
		printf("사각형의 면적 = %.2f\n", a * b);
	}
	return 0;
}
