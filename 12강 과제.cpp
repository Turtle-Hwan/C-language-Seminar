/* 입력받은 문자열을 그 문자열의 크기만큼 동적할당시켜서 저장, 2번쨰 문자열 받아 원래 문장에 재할당. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int size1 = 1;
    char* inputString1 = (char*)malloc(sizeof(char) * size1);

    printf("문자열1 입력: ");

    while (1) {
        char inputChar = getchar();          //입력받은 문자열. 한 자씩 inputChar에 넣기.

        if (inputChar == '\n')               //만약 엔터 입력받으면, while 탈출.
            break;
        else {
            if (inputString1 != NULL)         // (C6011) <null 포인터 역참조 오류> 해결 -> null 검사 해줘야함.
                *(inputString1 + size1 -1) = inputChar;   //입력받은 문자를 inputString 맨 앞에서부터 하나씩 집어넣기.

            size1++;

            char* temp = (char*)realloc(inputString1, sizeof(char) * size1);         //realloc: 메모리 공간을 늘려줌. (시작 포인터의 위치는 그대로 유지)
            if (temp != NULL)                  // (C6308) <realloc의 인수에 null 포인터를 할당하면 원래 메모리 블록에 누수 발생가능한 오류> 해결  -> temp 를 거쳐서 null 검사 후, 원래 메모리에 넣어야 함.
                inputString1 = temp;
        }
    }
    
    if (inputString1 != NULL)
        *(inputString1 + size1 - 1) = '\0';       // 배열 끝에 null 문자 추가.




    int size2 = 1;
    char* inputString2 = (char*)malloc(sizeof(char) * size2);

    printf("문자열2 입력: ");

    while (1) {
        char inputChar = getchar();

        if (inputChar == '\n')
            break;
        else {
            if (inputString2 != NULL)
                *(inputString2 + size2 - 1) = inputChar;

            size2++;

            char* temp = (char*)realloc(inputString2, sizeof(char) * size2);
            if (temp != NULL) 
                inputString2 = temp;
        }
    }

    if (inputString2 != NULL)
        *(inputString2 + size2 - 1) = '\0'; 



    printf("\n문자열1: %s\n", inputString1);

    printf("문자열2: %s\n", inputString2);

    if (inputString1 != 0 && inputString2 != 0) {
        char* temp = (char*)realloc(inputString1, sizeof(char) * (strlen(inputString1) + strlen(inputString2) + 1));
        if (temp != NULL)
            inputString1 = temp;

        memcpy(inputString1 + strlen(inputString1), inputString2, strlen(inputString2) +  1);
        printf("\n합쳐진 문자열: %s\n", inputString1);
    }


    free(inputString1);
    free(inputString2);
}

