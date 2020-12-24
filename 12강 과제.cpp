/* �Է¹��� ���ڿ��� �� ���ڿ��� ũ�⸸ŭ �����Ҵ���Ѽ� ����, 2���� ���ڿ� �޾� ���� ���忡 ���Ҵ�. */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int size1 = 1;
    char* inputString1 = (char*)malloc(sizeof(char) * size1);

    printf("���ڿ�1 �Է�: ");

    while (1) {
        char inputChar = getchar();          //�Է¹��� ���ڿ�. �� �ھ� inputChar�� �ֱ�.

        if (inputChar == '\n')               //���� ���� �Է¹�����, while Ż��.
            break;
        else {
            if (inputString1 != NULL)         // (C6011) <null ������ ������ ����> �ذ� -> null �˻� �������.
                *(inputString1 + size1 -1) = inputChar;   //�Է¹��� ���ڸ� inputString �� �տ������� �ϳ��� ����ֱ�.

            size1++;

            char* temp = (char*)realloc(inputString1, sizeof(char) * size1);         //realloc: �޸� ������ �÷���. (���� �������� ��ġ�� �״�� ����)
            if (temp != NULL)                  // (C6308) <realloc�� �μ��� null �����͸� �Ҵ��ϸ� ���� �޸� ��Ͽ� ���� �߻������� ����> �ذ�  -> temp �� ���ļ� null �˻� ��, ���� �޸𸮿� �־�� ��.
                inputString1 = temp;
        }
    }
    
    if (inputString1 != NULL)
        *(inputString1 + size1 - 1) = '\0';       // �迭 ���� null ���� �߰�.




    int size2 = 1;
    char* inputString2 = (char*)malloc(sizeof(char) * size2);

    printf("���ڿ�2 �Է�: ");

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



    printf("\n���ڿ�1: %s\n", inputString1);

    printf("���ڿ�2: %s\n", inputString2);

    if (inputString1 != 0 && inputString2 != 0) {
        char* temp = (char*)realloc(inputString1, sizeof(char) * (strlen(inputString1) + strlen(inputString2) + 1));
        if (temp != NULL)
            inputString1 = temp;

        memcpy(inputString1 + strlen(inputString1), inputString2, strlen(inputString2) +  1);
        printf("\n������ ���ڿ�: %s\n", inputString1);
    }


    free(inputString1);
    free(inputString2);
}

