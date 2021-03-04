#include <stdio.h>

int main() {
	float sum = 0;
	int mmr[10] = { 13, 56, 78, 35, 18, 77, 90, 89, 47, 64 };

	for (int i = 0; i < 10; i++)
		sum = sum + mmr[i];

	printf("평균은 %.2f 입니다.\n", sum / 10);

	for (int i = 0; i < 10; i++) {
		if (mmr[i] < 20)
			printf("%2d번째 플레이어는 %d 아이언입니다.\n", i + 1, mmr[i]);
		else if (mmr[i] < 40)
			printf("%2d번째 플레이어는 %d 브론즈입니다.\n", i + 1, mmr[i]);
		else if (mmr[i] < 60)
			printf("%2d번째 플레이어는 %d 실버입니다.\n", i + 1, mmr[i]);
		else if (mmr[i] < 80)
			printf("%2d번째 플레이어는 %d 플레입니다.\n", i + 1, mmr[i]);
		else
			printf("%2d번째 플레이어는 %d 다이아입니다.\n", i + 1, mmr[i]);
	}
}
