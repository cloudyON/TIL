/*
   변수 -연산자
   연산자들 operraiton
   변수 variable

   데이터 타입 크기 size0f()

*/

/*
대입 연산 : =
산술연산자: +-/*
증강연산자 ++, __
관계연산자 < <= , > , >=
논리 연산자 &&, \\, !

*/

#include <stdio.h>

int main()
{
  int a= 10, b=2;
  int result1, result2, result3, result4;
  printf("d\n", 80);
  printf("%f\n",3.14);
  printf("%c\n", 'a');

  printf("%d %d %d %d\n", a+b, a-b, a/b, a%b);
  a++;
  printf("%d\n",a );
  a++;
  printf("%d\n",a );
  a++;
  printf("%d\n",a );
  a--;
  printf("%d\n",a );
  a--;
  printf("%d\n",a );
  a--;
  printf("%d\n",a );

  result1 = (a>b);
  result2 = (a <= b);
  result3 = (a == b);
  result4 = (a != b);

  printf("result1 is %d\n", result1);
  printf("result2 is %d\n", result2);
  printf("result3 is %d\n", result3);
  printf("result4 is %d\n", result4);
  printf("\n");
  // and : &&
  // or : ||
  // not : !
  result1 = (a > b) && (a < b);
  printf("%d\n", result1);
  result2 = (a > b) || (a < b);
  printf("%d\n", result2);
  result3 = !a;
  printf("%d\n", result3);
  result4 = !((a > b) || (a < b));
  printf("%d\n", result4);

  

}
