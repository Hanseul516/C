#include <stdio.h>

int main(void)
{
    // 배열
    // int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다.
    // int subway_2 = 40;
    // int subway_3 = 50;

    // printf("지하철 1호차에 %d명이 타고 있습니다.\n", subway_1);
    // printf("지하철 2호차에 %d명이 타고 있습니다.\n", subway_2);
    // printf("지하철 3호차에 %d명이 타고 있습니다.\n", subway_3);

    // 여러 개의 변수를 함께. 동시에 생성
    // int subway_array[3]; //[0][1][2]
    // subway_array[0] = 30;
    // subway_array[1] = 40;
    // subway_array[2] = 50;

    // for (int i = 0; i<3; i++)
    // {
    //     printf("지하철 %d호차에 %d명이 타고 있습니다.\n", i+1, subway_array[i]);

    // }

    // 값 설정 방법
    // int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // 값은 반드시 초기화해야 한다.
    //  int arr[10]; //더미값이 나옴
    //  for (int i = 0; i < 10; i++)
    //  {
    //      printf("%d\n", arr[i]);
    //  }

    // //배열크기는 항상 상수로 선언
    // int size = 10;
    // int arr[10];

    // int arr[10] = {1, 2}; // 나머지 자리 0으로 초기화됨
    // for (int i = 0; i < 10; i++)
    // {
    //     printf("%d\n", arr[i]);
    // }

    // int arr[] = {1, 2}; //arr[2]와 동일

    // float arr_f[5] = {1.0f, 2.0f, 3.0f};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%.2f\n", arr_f[i]); //.2f는 소수점 둘째 자리까지 표시
    // }

    // 문자 vs 문자열
    // char c = 'A';
    // printf("%c\n", c); // A

    // char str[6] = "coding"; //[c][o][d][i][n][g]
    // // printf("%s\n", str);
    // // printf("%d\n", sizeof(str)); // 6
    // for (int i = 0; i < sizeof(str); i++)
    // {
    //     printf("%c\n", str[i]);
    // }

    // char kor[] ="정처기합격";
    // printf("%s\n", kor); //정처기합격
    // printf("%d\n", sizeof(kor)); //11 영어는 1byte, 한글은 2byte + 널문자 '\0'

    // char c_array[7] ={'c','o','d','i','n','g','\0'};
    // printf("%s\n", c_array); //coding

    // char c_array[10] = {'c', 'o', 'd', 'i', 'n', 'g'};
    // for (int i = 0; i < sizeof(c_array); i++)
    // {
    //     printf("%c\n", c_array[i]); //남는 공간 공백으로 출력
    // }


}
