#include <stdio.h>
#include <string.h>

int string_length(char* str);
int word_num(char* str);
char* string_change(char* str, char* target_str, char* substr);

int main() {
	char str[1000] = "If you cannot fly then run. If you cannot run, "
					"then walk. And, if you cannot walk, then crawl, "
					"but whatever you do, you have to keep moving forward.";
	char target_str[] = "yo";
	char substr[] = "5555";

	printf("%d\n", string_length(str));
	printf("%d\n", word_num(str));
	printf("%s\n", string_change(str, target_str, substr));
}

int string_length(char* str) {

	return strlen(str);
}

int word_num(char* str) {
	int word = 1;
	int strAddress = 0;

	for (int i = 0; i < strlen(str); i++) {

		if (*(str + i) == *" ") {
			word++;
			strAddress++;
		}
		else {
			strAddress++;
		}
	}

	return word;
}

char* string_change(char* str, char* target_str, char* substr) {
	char* moveAddressStart = str;			//�ű� �ּ� ����������
	char strChange[1000] = "";				//�Ű� ���� �迭
	int t = 0;								//strChange�� ����ִ� ���ڿ� ����

	while(true) {
		char* changeAddress = strstr(str, target_str);		//�ٲ� ��ġ �ּ� ������


		if (changeAddress == NULL) {
			memmove(strChange + strlen(strChange), moveAddressStart, str + strlen(str) + 1 - moveAddressStart);		//���� �κ� �� �ű�� + �ι���
			break;
		}
		else {

			memmove(strChange + t, moveAddressStart, changeAddress - moveAddressStart);		//�ű� ��ġ ���� ~~ �ٲ� ��ġ �ּұ��� �Ű� ����.
			
			t = changeAddress - moveAddressStart + t;

			strChange[t] = 0;						//�ι��� ���� (memmove �� �� �ڵ������� �ȵ�)

			str = changeAddress + strlen(target_str);

			moveAddressStart = str;					//�ű� �ּ� ������ �ٲ� ���� �������� ��ȯ

			strcat_s(strChange, substr);			//�Ű� ��� �迭�� �ٲٴ� ���ڿ� �߰� (���� ������ ������)

			t = t + strlen(substr);

		}
	}
	return strChange;
}