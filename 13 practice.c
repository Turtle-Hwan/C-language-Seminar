#include <stdio.h>
#include <string.h>

int main() {
	FILE* fp = NULL;

	if (fopen_s(&fp, "a.txt", "r+") != 0)		//fopen_s 는 파일이 제대로 열리면 0을 반환함.
		printf("파일 열기 실패!\n");

	char stra[100] = "";			//a.txt 내용 넣을 배열
	fgets(stra, 100, fp);
	
	printf("a.txt : \n%s\n\n", stra);


	
	if (fopen_s(&fp, "b.txt", "r+") != 0)
		printf("파일 열기 실패!\n");

	char strb[100] = "";
	fgets(strb, 100, fp);			//b.txt 내용 넣을 배열

	printf("b.txt : \n%s\n\n", strb);


	int a = strlen(strb) / 2;

	fseek(fp, a, SEEK_SET);	//위치 지정자를 문자열 넣을 곳으로 이동.



	//뒤로 밀어낼 문자를 임시 저장할 배열.
	char strTemp[100] = "";

	fgets(strTemp, 100, fp);



	fseek(fp, a, SEEK_SET);	//위치 지정자를 문자열 넣을 곳으로 이동.

	fputs(stra, fp);		//원하는 문자열 넣기

	fputs(strTemp, fp);		//뒤로 밀어낸 문자열 넣기
	
	

	char strFin[100] = "";
	
	fseek(fp, 0, SEEK_SET);

	fgets(strFin, 100, fp);
	
	printf("삽입 완료 : \n%s", strFin);

	fclose(fp);
}
