#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "module_1.h"
#include "module_2.h"

int main() {
	//module_1

	int randomNum[20] = {0, };
	srand(time(NULL));

	for (int i = 0; i < 20; i++)
		randomNum[i] = rand() % 100 + 1;
	
	printf("�ִ�: %d\n", maxNum(randomNum));		


	//module_2

	int x;
	printf("���� �Է�: ");
	scanf_s("%d", &x);

	compare(x);
}