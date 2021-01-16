/*
   변수 -연산자
   연산자들 operraiton
   변수 variable

   데이터 타입 크기 size0f()

*/

//sizeof() : 바이트의 크기를 알려주는 함수
//bit == 0 ex)01110101
//1byte : 8bit


#include <stdio.h>

int main()
{
  char num1 = 10;
  short num2 = 20;
  int num3 = 30;
  long num4 = 40;

  //실수형
  float num5 = 3.14;
  double num6 = 3.15;
  long num7 = 3.17;

  //출력
  printf("--------------integer-----------\n");
  printf("char : %lubyte, %lubyte\n", sizeof(char), sizeof(num1));
  printf("short : %lubyte, %lubyte\n", sizeof(short), sizeof(num2));
  printf("int : %lubyte, %lubyte\n", sizeof(int), sizeof(num3));
  printf("long : %lubyte, %lubyte\n", sizeof(long), sizeof(num4));
  printf("--------------real number-----------\n");
  printf("float : %lubyte, %lubyte\n", sizeof(float), sizeof(num5));
  printf("double : %lubyte, %lubyte\n", sizeof(double), sizeof(num6));
  printf("long double : %lubyte, %lubyte\n", sizeof(long), sizeof(num7));


}
