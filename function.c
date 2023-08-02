#include <stdio.h>

// 선언
void p(int num);

void function_without_return(); // 반환하지 않겠다.
int function_with_return();     // 정수형을 반환하겠다.
void function_with_params(int num1, int num2, int num3);
int apple(int apple1, int apple2);

int main(void)
{
    // function
    // 계산기

    // int num = 2;
    // p(num);

    // // 2 + 3 은?
    // num = num + 3;
    // p(num);

    // // 5 - 1 은?
    // num -= 1;
    // p(num);

    // // 4 x 3 은?
    // num *= 3;
    // p(num);

    // // 12 / 6은?
    // num /= 6;
    // p(num);

    // 함수종류
    // 반환값이 없는 함수
    // function_without_return();

    // 반환값이 있는 함수
    //  int ret = function_with_return();
    //  p(ret);

    // 파라미터(매개변수)가 있는 함수
    // function_with_params(1, 2, 3);

    //파라미터(매개변수)가 있고, 반환값도 있는 함수
    //int ret = apple(5,2); // 5개의 사과중에서 2개를 먹었어요.
    // printf("5개의 사과중에서 2개를 먹어서 %d개가 남았어요.\n", ret);
    printf("%d개의 사과중에서 %d개를 먹어서 %d개가 남았어요.\n", 10, 4, apple(10,4));

    return 0;
}

// 정의
void p(int num)
{
    printf("num은 %d입니다\n", num);
}

void function_without_return()
{
    printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
    printf("반환값이 있는 함수입니다.\n");
    return 10;
}

void function_with_params(int num1, int num2, int num3)
{
    printf("매개변수가 있는 함수이며, 매개변수는 %d, %d, %d 입니다.\n", num1, num2, num3);
}

int apple(int apple1, int apple2)
{
    return apple1 - apple2;
}