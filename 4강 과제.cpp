#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CHANCE 10

int main()
{
    srand(time(NULL));
    int answer = rand() % 50 + 1;
    int predict_num = 0;

    int a = 0;
    printf("���ֺ� �Ѳ� ���� ���߱���� ����!\n");
    while (a < CHANCE)
    {
        a++;
        printf("���� ���� : ");
        scanf_s("%d", &predict_num);
        if (predict_num == answer)
        {
            printf("����!\n");
            if ((answer % 3) == 0)
            {
                printf("�翷 1��\n");
                break;
            }
            else if ((answer % 3) == 1)
            {
                printf("������ 1��\n");
                break;
            }
            else if ((answer % 3) == 2)
            {
                printf("���� �� ��...\n");
                break;
            }
            return 0;
        }
        else if (predict_num > answer)
            printf("��!\n");
        else if (predict_num < answer)
            printf("�ٿ�!\n");
    }
}