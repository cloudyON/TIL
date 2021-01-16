// Chapter 03-02

/*
# c언어 에서의 반복문
 - for문
 -while문
 - do - while문
 -  흐름제어 (break, continue, goto)
*/

//for문
 /*
 for(초기값, 조건값, 증갑값) {
  반복 할 내용;
}
 */

 //#include <stdio.h>
//
 // int main(void)
 // {
 //   int num;
 //   for (num=0; num=<; num++)
 //   {
 //     printf("%d\n", num);
 //   }
 //   return 0;
 // }
// #include <stdio.h>
// int main() {
//   int num;
//   for (num = 0; num <= 1000; num++){
//     if (num % 2 == 0 )
//     {
//       if (num > 499)
//       {
//         num += 9;
//       }
//       printf("%d\n", num);
//
//     }
//   }
//   return 0;
// }


#include <stdio.h>
#include <windows.h>

int main(void)
{
  system("chcp 65001");
  int num, j = 9, result = 0;
  printf("숫자를 입력하세요 : ");
  scanf("%d\n", &num );

  for (; num>0; num--)
  {
    for (j = 9; j >0; j--)
    {
      result = num * j;
      printf("%d * %d = %d\n", num, j, result);
    }
    printf("----------------------------\n");
  }
  return 0;
}
