#include <stdio.h>

int main() {
	int A, B;

	printf("���� �� ���� �������� ������ �Է��� �ּ���: ");
	scanf_s("%d %d", &A, &B);

	while (A <= 1000) {
		A *= B;
	}
	
	printf("\nA ���: %d", A);

	if (A % 2 == 0) {
		printf("\t¦��");
	}
	else {
		printf("\tȦ��");
	}
}