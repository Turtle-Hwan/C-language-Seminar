#include <stdio.h>

int main() {
	int a, b = 0;
	printf("�� ������ �Է��� �ּ���: ");
	scanf_s("%d %d", &a, &b);

	char pos = 0;
	getchar();
	printf("�����ڸ� �Է��� �ּ���: ");
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
		printf("+ - * / �߿� �Է��� �ּ���.");
	}
}