// chapter 04-02

/*
  -구조체
  -포인터 함수
  -구조체 선언
  -구조체로 명함만들기
  -구조체 포인터
*/

#include <stdio.h>
#include <windows.h>
struct group{
  int a;
  double b;
};

int main(void){
  system("chcp 65001");
  //향상된 선언 방법
  struct group g1 = {10, 3.14};
  struct group g2 = {30, 44.25};

  // g1.a = 10;
  // g1.b = 3.14;
  //
  // g2.a = 30;
  // g2.b = 44.25;

  printf("g1.a의 값은 %d 입니다.\n",g1.a );
  printf("g1.b의 값은 %lf 입니다.\n", g1.b);
  printf("-------------------------------------\n");
  printf("g2.a의 값은 %d 입니다.\n",g2.a );
  printf("g2.b의 값은 %lf 입니다.\n", g2.b);

  return 0;


};
