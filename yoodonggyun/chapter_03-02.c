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

 /*
while문의 구조
while(조건문)
{
   반복 수행할 내용
   증강문
}

 */

 // #include <stdio.h>
 //
 // int main(void)
 // {
 //   int num = 0;
 //
 //   while (num < 10)
 //   {
 //     pirntf("%d\n", num0)
 //     pirntf("while loop!\n");
 //     num++;
 //   }
 //   return 0;
 // }

 // #include <stdio.h>
 //
 // int main(void)
 // {
 //   int i = 0;
 //
 //   while(1){
 //    printf("looping!! %d\n", i);
 //    if (i >= 500)
 //    {
 //      break;
 //    }
 //    i++;
 //  }
 //  printf("stop data i : %d\n", i);
 // }


// for 문은 반복할 범위가 확실한 때,
// while 범위는 모르겠으나, 멈출 조건을 정확하게
// #include <stdio.h>
// #include <windows.h>
// #include<stdlib.h>
//
// int main(void)
// {
//   system("chcp 65001");
//
//
//   while(1)
//   {
//     int i = rand() % 1000;
//     if (i == 66){
//       printf("정답입니다. : %d\n", i);
//       break;
//     }
//     else
//       printf("이 숫자는 틀렸습니다. %d\n",i);
//   }
//   return 0;
// }

#include <stdio.h>

int main(void){
  int num = 1;

  do
  {
    printf("%d \n", num);
    num ++;
  }
  while (num < 10);
  printf("\n 반복문을 종료한 후 : num = %d \n", num);

  return 0;

}
