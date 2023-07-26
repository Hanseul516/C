#include <stdio.h>

int main(void)
{
    /* 정수형 변수
    int age = 12;
    printf("%d\n", age);
    //%d는 정수형값을 출력하라 ,뒤의 값(age)이 %뒤에 온다고 생각
    return 0;*/

    // 실수형 변수
    float f = 46.5;
    printf("%.2f\n", f);  //소수점 뒤 2자리
    double d = 4.428;
    printf("%.21f\n", d);  // 소수점 뒤 21자리
    return 0;
}
