#include <stdio.h>

int main(void)
{
    // 정수형 변수
    // int age = 12;
    // printf("%d\n", age);
    // //%d는 정수형값을 출력하라 ,뒤의 값(age)이 %뒤에 온다고 생각
    // return 0;

    // 실수형 변수
    // float f = 46.5;
    // printf("%.2f\n", f);  //소수점 뒤 2자리
    // double d = 4.428;
    // printf("%.21f\n", d);  // 소수점 뒤 21자리
    // return 0;

    // 상수
    // const int YEAR = 2000;
    // printf("태어난 년도 : %d\n", YEAR);
    // YEAR = 2001; //상수라 불가능
    // return 0;

    // printf
    // int add = 3 + 7; // 10
    // // printf("3+7=%d\n", add); // 3+7=10
    // printf("%d + %d = %d\n", 3, 7, 3 + 7); // 3+7=10
    // return 0;

    // scanf - 키보드 입력을 받아서 저장
    // int input;
    // printf("값을 입력하세요 : ");
    // scanf("%d", &input);
    // printf("입력값 : %d\n", input);
    // return 0;

    int one, two, three;
    printf("3개의 정수를 입력하세요: ");
    scanf("%d,%d,%d", &one, &two, &three);
    printf("첫번째 값: %d\n", one);
    printf("두번째 값: %d\n", two);
    printf("세번째 값: %d\n", three);
    return 0;
}
