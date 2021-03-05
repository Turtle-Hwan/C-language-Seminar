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
	
	printf("최댓값 : %d\n", maxNum(randomNum));		


	//module_2
	int x;
	printf("수를 입력 : ");
	scanf_s("%d", &x);

	compare(x);
}
