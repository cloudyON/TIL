/*
   변수 verable
   변수 : 변할 수 있는
   constant : 변할 수 있는 수

*/
/*

  변수 정책
  - 숫자로 시작 할 수 없다.
  예 1010010010 1092340123409 x!
  - 띄어 쓰기를 할 수 없다
  예 nick name -> nick_name, phone number
  - 키워드를 변수명으로 할 수 없다
  ex return include int

 변수 선언 강식
 (데이터 타입) {변수 이름}
 int age;
 int age = 15;
 int age ,dat, old;
 int age=15, day ='monday';

 데이터 타입
  - int : 정수형
  ex) 3, 1010010010
  -float : 실수형
  ex) 3.14 2.3332323
   - char : 문자형
    ex 'a','b'
  - double
  -long

*/

#include <stdio.h>
#define p1 3.14

int main()
{
  int age=5,a,b,c;
  float weight;
  char latter_grade = 'a';
  printf("%f\n", p1);
  printf("%d\n", age);
  printf("%d %d %d\n", a,b,c);
  printf("i am %f years old\n", weight);
  printf("i got %c\n", latter_grade);
}
