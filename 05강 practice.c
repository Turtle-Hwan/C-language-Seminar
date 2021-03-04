#include <stdio.h>

int main() {
	int A, B;

	printf("숫자 두 개를 공백으로 구분해 입력해 주세요: ");
	scanf_s("%d %d", &A, &B);

	while (A <= 1000) {
		A *= B;
	}
	
	printf("\nA 출력: %d", A);

	if (A % 2 == 0) {
		printf("\t짝수");
	}
	else {
		printf("\t홀수");
	}
}
