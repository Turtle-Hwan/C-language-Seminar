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
	char* moveAddressStart = str;			//옮길 주소 시작포인터
	char strChange[1000] = "";				//옮겨 담을 배열
	int t = 0;								//strChange에 들어있는 문자열 개수

	while(true) {
		char* changeAddress = strstr(str, target_str);		//바뀔 위치 주소 포인터


		if (changeAddress == NULL) {
			memmove(strChange + strlen(strChange), moveAddressStart, str + strlen(str) + 1 - moveAddressStart);		//남은 부분 다 옮기기 + 널문자
			break;
		}
		else {

			memmove(strChange + t, moveAddressStart, changeAddress - moveAddressStart);		//옮길 위치 시작 ~~ 바뀔 위치 주소까지 옮겨 담음.
			
			t = changeAddress - moveAddressStart + t;

			strChange[t] = 0;						//널문자 삽입 (memmove 는 널 자동삽입이 안됨)

			str = changeAddress + strlen(target_str);

			moveAddressStart = str;					//옮길 주소 시작을 바뀔 문자 다음으로 변환

			strcat_s(strChange, substr);			//옮겨 담는 배열에 바꾸는 문자열 추가 (널이 없으면 오류남)

			t = t + strlen(substr);

		}
	}
	return strChange;
}
