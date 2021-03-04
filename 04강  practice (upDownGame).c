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
    printf("소주병 뚜껑 숫자 맞추기놀이 시작!\n");
    while (a < CHANCE)
    {
        a++;
        printf("예측 숫자 : ");
        scanf_s("%d", &predict_num);
        if (predict_num == answer)
        {
            printf("정답!\n");
            if ((answer % 3) == 0)
            {
                printf("양옆 1잔\n");
                break;
            }
            else if ((answer % 3) == 1)
            {
                printf("맞은편 1잔\n");
                break;
            }
            else if ((answer % 3) == 2)
            {
                printf("내가 한 잔...\n");
                break;
            }
            return 0;
        }
        else if (predict_num > answer)
            printf("업!\n");
        else if (predict_num < answer)
            printf("다운!\n");
    }
}
