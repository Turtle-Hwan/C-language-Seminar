#include <stdio.h>
#include <string.h>

int main() {
	FILE* fp = NULL;

	if (fopen_s(&fp, "a.txt", "r+") != 0)		//fopen_s �� ������ ����� ������ 0�� ��ȯ��.
		printf("���� ���� ����!\n");

	char stra[100] = "";			//a.txt ���� ���� �迭
	fgets(stra, 100, fp);
	
	printf("a.txt : \n%s\n\n", stra);


	
	if (fopen_s(&fp, "b.txt", "r+") != 0)
		printf("���� ���� ����!\n");

	char strb[100] = "";
	fgets(strb, 100, fp);			//b.txt ���� ���� �迭

	printf("b.txt : \n%s\n\n", strb);


	int a = strlen(strb) / 2;

	fseek(fp, a, SEEK_SET);	//��ġ �����ڸ� ���ڿ� ���� ������ �̵�.



	//�ڷ� �о ���ڸ� �ӽ� ������ �迭.
	char strTemp[100] = "";

	fgets(strTemp, 100, fp);



	fseek(fp, a, SEEK_SET);	//��ġ �����ڸ� ���ڿ� ���� ������ �̵�.

	fputs(stra, fp);		//���ϴ� ���ڿ� �ֱ�

	fputs(strTemp, fp);		//�ڷ� �о ���ڿ� �ֱ�
	
	

	char strFin[100] = "";
	
	fseek(fp, 0, SEEK_SET);

	fgets(strFin, 100, fp);
	
	printf("���� �Ϸ� : \n%s", strFin);

	fclose(fp);
}