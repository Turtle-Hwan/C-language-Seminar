#include <stdio.h>

int main() {
	int x, y;
	int mine[5][5] = { {1, 0, 0, 1, 0}, { 0, 0, 0, 1, 1 }, { 0, 1, 1, 0, 0 }, { 1, 0, 1, 0, 0 } };

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			printf("%d ", mine[i][j]);
		printf("\n");
	}

	while (1) {
		printf("Âï¾îº¼ ÁÂÇ¥ : ");
		scanf_s("%d %d", &x, &y);
		if (mine[y][x] == 1)
			printf("²Î\n");
		else
			printf("ÈŞ..\n");
	}
}