#include <stdio.h>

int main() {
	char name = 'V';
	int num = 100;
	double score = 98.2;

	char *p_name = &name;
	int *p_num = &num;
	double *p_score = &score;

	char **pp_name = &p_name;
	int **pp_num = &p_num;
	double **pp_score = &p_score;

	printf("===========변수 메모리 값 출력====================\n");
	printf("실제 값               : %8c %18d %16.1f\n", name, num, score);
	printf("포인터 값(변수의 주소): %p %p %p\n", p_name, p_num, p_score);
	printf("2중 포인터 값         : %p %p %p\n", pp_name, pp_num, pp_score);
	printf("2중 포인터의 주소 값  : %p %p %p\n", &pp_name, &pp_num, &pp_score);

	printf("===========각 변수의 크기 값 출력====================\n");
	printf("변수           : \t%8d %17d %16d\n", sizeof(name), sizeof(num), sizeof(score));
	printf("포인터 변수    : \t%8d %17d %16d\n", sizeof(p_name), sizeof(p_num), sizeof(p_score));
	printf("2중 포인터 변수: \t%8d %17d %16d\t(단위: byte)\n", sizeof(pp_name), sizeof(pp_num), sizeof(pp_score));
}
