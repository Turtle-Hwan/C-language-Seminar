#include <stdio.h>

bool str_compare(char* str1, char* str2);

int main()
{
    char str1[] = "56789";
    char str2[] = "56788";

    int a = sizeof(str1);
    printf("%d %d\n", a, sizeof(str2));

    str_compare(str1, str2) ? printf("���� ���� ���ڿ��Դϴ�.\n") : printf("���� �ٸ� ���ڿ��Դϴ�.\n");
}

bool str_compare(char* str1, char* str2)
{
    printf("%d %d\n", sizeof(str1), sizeof(str2)); //���⼭�� ����� ǥ���� �ȵ�!
    bool flag = true;
    int i = 0;

    for (i = 0; str1[i] != NULL && str2[i] != NULL; i++)
        if (str1[i] != str2[i]) {
            flag = false;
            return flag;
        }
    return str1[i] != 0 || str2[i] != 0 ? !flag : flag;
}