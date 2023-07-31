#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    srand(time(NULL)); //난수 초기화F
    int num = rand() % 3;     // 0 ~ 2 중에 랜덤으로 뽑는다.
    int num = rand() % 3 + 1; // 1 ~ 3 중에 랜덤으로 뽑는다.

    return 0;
}