#include <stdio.h>

bool str_compare(char* str1, char* str2);

int main()
{
    char str1[] = "56789";
    char str2[] = "56788";

    int a = sizeof(str1);
    printf("%d %d\n", a, sizeof(str2));

    str_compare(str1, str2) ? printf("서로 같은 문자열입니다.\n") : printf("서로 다른 문자열입니다.\n");
}

bool str_compare(char* str1, char* str2)
{
    printf("%d %d\n", sizeof(str1), sizeof(str2)); //여기서는 제대로 표현이 안됨!
    bool flag = true;
    int i = 0;

    for (i = 0; str1[i] != NULL && str2[i] != NULL; i++)
        if (str1[i] != str2[i]) {
            flag = false;
            return flag;
        }
    return str1[i] != 0 || str2[i] != 0 ? !flag : flag;
}
