#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main_random(void)
{
    // srand(time(NULL)); //난수 초기화
    // int num = rand() % 3;     // 0 ~ 2 중에 랜덤으로 뽑는다.
    // int num = rand() % 3 + 1; // 1 ~ 3 중에 랜덤으로 뽑는다.

    // printf("난수 초기화 이전\n");
    // for (int i = 0; i < 10; i++)
    //     printf("%d ", rand() % 10);

    // srand(time(NULL)); //난수 초기화
    // printf("\n\n난수 초기화 이후\n");
    // for (int i = 0; i < 10; i++)
    //     printf("%d ", rand() % 10);

    // 가위 바위 보
    // srand(time(NULL));
    // int i = rand() % 3; // 0 ~ 2 중 랜덤
    // if (i == 0)
    // {
    //     printf("가위\n");
    // }
    // else if (i == 1)
    // {
    //     printf("바위\n");
    // }
    // else if (i == 2)
    // {
    //     printf("보\n");
    // }
    // else
    // {
    //     printf("몰라요\n");
    // }

    // srand(time(NULL));
    // int i = rand() % 3; // 0 ~ 2 중 랜덤
    // switch (i)
    // {
    // case 0:
    //     printf("가위\n");
    //     break;
    // case 1:
    //     printf("바위\n");
    //     break;
    // case 2:
    //     printf("보\n");
    //     break;
    // default:
    //     printf("몰라요\n");
    //     break;
    // }
    return 0;
}