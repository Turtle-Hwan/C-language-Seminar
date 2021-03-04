#include <stdio.h>

int main() {
	int a, b = 0;
	printf("두 정수를 입력해 주세요: ");
	scanf_s("%d %d", &a, &b);

	char pos = 0;
	getchar();
	printf("연산자를 입력해 주세요: ");
	scanf_s("%c", &pos);

	if (pos == '+') {
		printf("%d", a + b);
	}
	else if (pos == '-') {
		printf("%d", a - b);
	}
	else if (pos == '/') {
		printf("%f", (float)a / b);
	}
	else if (pos == '*') {
		printf("%d", a * b);
	}
	else {
		printf("+ - * / 중에 입력해 주세요.");
	}
}
