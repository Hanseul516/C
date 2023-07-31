#include <stdio.h>

int main(void)
{
    // 버스를 탄다고 가정. 학생/성인으로 구분(성인 : 20세)
    int age = 25;
    // if (조건) {} else {}
    if (age >= 20)
    {
        printf("성인입니다.\n");
    }
    else
    {
        printf("학생입니다.\n");
    }
    return 0;
}