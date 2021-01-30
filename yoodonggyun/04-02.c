// chapter 05-01

/*
  -구조체
  -포인터 함수
  -구조체 선언
  -구조체로 명함만들기
  -구조체 포인터
*/


#include <stdio.h>
#include <windows.h>
void add(double num1, double num2){
  double result;
  result = num1 + num2;
  printf("%f + %f = %f 입니다.\n", num1, num2, result);
}

int main(void){
  system("chcp 65001");
  // 함수의 이름은! 함수의 시작 주소를 의미하느나 것!
  printf("%p %p %p \n", main, printf, scanf);
  printf("===================================\n");

  double x = 3.1, y = 7.4;
  void(*fp)(double, double); // 포인터 함수 선언

  printf("add의 함수 주소는 %p \n", add);
  printf("함수 포인터의 주소 : %p \n", &fp);
  printf("함수 포인터가 가리키는 주소 : %p \n", fp);

  fp = add;
  printf("함수 포인터가 가리키는 주소 : %p \n", fp);




  return 0;
}
