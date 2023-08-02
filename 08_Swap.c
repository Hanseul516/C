#include <stdio.h>
void swap(int a, int b);
void swap_addr(int *a, int *b);
void changeArray(int *ptr);

int main_swap(void)
{
    // int a = 10;
    // int b = 20;
    // // a와 b의 값을 바꾼다.
    // printf("Swap 함수 전 => a: %d, b: %d\n", a, b);
    // swap(a, b);
    // printf("Swap 함수 후 => a: %d, b: %d\n", a, b);

    // // 값에 의한 복사(call by value) -> 값만 복사한다는 의미

    // // 주소값을 넘기면? 메모리공간에 있는 주소값 자체를 넘기면... 철수네처럼
    // printf("(주소값 전달)Swap 함수 전 => a: %d, b: %d\n", a, b);
    // swap_addr(&a, &b);
    // printf("(주소값 전달)Swap 함수 후 => a: %d, b: %d\n", a, b);

    // 배열일때, arr2 -> 주소
    int arr2[3] = {10, 20, 30};
    // changeArray(arr2);
    changeArray(&arr2[0]);
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr2[i]);
    }


    return 0;
}

void swap(int a, int b)
{
    printf("Swap 함수 내 a의 주소: %d\n", &a);
    printf("Swap 함수 내 b의 주소: %d\n", &b);

    int temp = a;
    a = b;
    b = temp;
    printf("Swap 함수 내 => a: %d, b: %d\n", a, b); // Swap 함수 내 => a: 20, b: 10
}

void swap_addr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("(주소값 전달)Swap 함수 내 => a: %d, b: %d\n", *a, *b);
}

void changeArray(int *ptr)
{
    ptr[2] = 50;
}
