#include <stdio.h>

struct GameInfo
{
    char *name;
    int year;
    int price;
    char *company;

    struct GameInfo *friendGame; // 연관 업체 게임
};

typedef struct GameInformation
{
    char *name;
    int year;
    int price;
    char *company;

    struct GameInfo *friendGame; // 연관 업체 게임
} GAME_INFO;

int main(void)
{
    //[게임출시]
    // 이름 : 더킹게임
    // 발매년도 : 2023년
    // 가격: 500원
    // 제작사 : 두슬회사

    char *name1 = "더킹게임"; // 다른 변수명 사용
    int year1 = 2023;
    int price1 = 500;
    char *company1 = "두슬회사";

    //[또다른 게임 출시]
    // 이름 : 더퀸게임
    // 발매년도 : 2023년
    // 가격: 1000원
    // 제작사 : 세슬회사

    char *name2 = "더퀸게임"; // 다른 변수명 사용
    int year2 = 2023;
    int price2 = 1000;
    char *company2 = "세슬회사";

    // 구조체 사용
    struct GameInfo GameInfo1;
    GameInfo1.name = "더킹게임";
    GameInfo1.year = 2023;
    GameInfo1.price = 500;
    GameInfo1.company = "두슬회사";

    // 구조체 출력
    printf("-- 게임 출시 정보 --\n");
    printf("   게임명   : %s\n", GameInfo1.name);
    printf("   발매년도 : %d\n", GameInfo1.year);
    printf("   가격     : %d\n", GameInfo1.price);
    printf("   제작사   : %s\n\n", GameInfo1.company);

    // 구조체를 배열처럼 초기화
    struct GameInfo GameInfo2 = {"더퀸게임", 2023, 1000, "세슬회사"};
    printf("-- 또다른 게임 출시 정보 --\n");
    printf("   게임명   : %s\n", GameInfo2.name);
    printf("   발매년도 : %d\n", GameInfo2.year);
    printf("   가격     : %d\n", GameInfo2.price);
    printf("   제작사   : %s\n", GameInfo2.company);

    // 구조체 배열
    struct GameInfo GameArray[2] = {
        {"더킹게임", 2023, 500, "두슬회사"},
        {"더퀸게임", 2023, 1000, "세슬회사"}};

    // 구조체 포인터
    struct GameInfo *GamePtr; // 미션맨
    GamePtr = &GameInfo1;
    printf("\n\n-- 미션맨의 게임 출시 정보 --\n");
    // printf("   게임명   : %s\n", (*GamePtr).name);
    // printf("   발매년도 : %d\n", (*GamePtr).year);
    // printf("   가격     : %d\n", (*GamePtr).price);
    // printf("   제작사   : %s\n", (*GamePtr).company);
    printf("   게임명   : %s\n", GamePtr->name);
    printf("   발매년도 : %d\n", GamePtr->year);
    printf("   가격     : %d\n", GamePtr->price);
    printf("   제작사   : %s\n", GamePtr->company);

    // 연관 업체 게임 소개
    GameInfo1.friendGame = &GameInfo2;
    printf("\n\n-- 연관 업체의 게임 출시 정보 --\n");
    printf("   게임명   : %s\n", GameInfo1.friendGame->name);
    printf("   발매년도 : %d\n", GameInfo1.friendGame->year);
    printf("   가격     : %d\n", GameInfo1.friendGame->price);
    printf("   제작사   : %s\n", GameInfo1.friendGame->company);

    // typedef
    // 자료형에 별명 지정
    int i = 1;
    typedef int 정수;
    typedef float 실수;
    정수 정수변수 = 3;    // int i=3;
    실수 실수변수 = 3.23; // float f =3.23f;
    printf("\n\n정수변수 : %d, 실수변수%.2f\n\n", 정수변수, 실수변수);

    typedef struct GameInfo 게임정보;
    게임정보 game;
    game.name = "더프린스 게임";
    game.year = 2022;

    GAME_INFO game2;
    game2.name = "더프린세스 게임";
    game2.year = 2021;

    return 0;
}
