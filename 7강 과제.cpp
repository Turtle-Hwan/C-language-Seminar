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

	printf("===========���� �޸� �� ���====================\n");
	printf("���� ��               : %8c %18d %16.1f\n", name, num, score);
	printf("������ ��(������ �ּ�): %p %p %p\n", p_name, p_num, p_score);
	printf("2�� ������ ��         : %p %p %p\n", pp_name, pp_num, pp_score);
	printf("2�� �������� �ּ� ��  : %p %p %p\n", &pp_name, &pp_num, &pp_score);

	printf("===========�� ������ ũ�� �� ���====================\n");
	printf("����           : \t%8d %17d %16d\n", sizeof(name), sizeof(num), sizeof(score));
	printf("������ ����    : \t%8d %17d %16d\n", sizeof(p_name), sizeof(p_num), sizeof(p_score));
	printf("2�� ������ ����: \t%8d %17d %16d\t(����: byte)\n", sizeof(pp_name), sizeof(pp_num), sizeof(pp_score));
}