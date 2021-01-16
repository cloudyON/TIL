/*
# c언어 에서의 반복문
 - for문
 -while문
 - do - while문
 -  흐름제어 (break, continue, goto)
*/

// break VS continue

// #include <stdio.h>
//
// int main(void)
// {
//   char ch;
//
//   printf("알파벳 무자를 입력하세요. 종료시에는 q 입력\n" );
//   for (; ;)
//   {
//     scanf("%c\n", &ch );
//     if (ch == 'q')
//        continue;
//   }
//   printf("프로그램을 종료합니다 \n");
//
//
//   return 0;
// }
// #include <stdio.h>
// int main(void)
// {
//   int num;
//   for (num = 0; num < 100; num++){
//     if (num % 2 == 1)
//       continue;
//     printf("%d\n", num);
//   }
// }



// 숫자를 입력받습니다.(1 ~ 50)
// 만약 48을 만난다면 break
// 하지만, 5의 배수를 만났다면 printf 문을 출력하지 말아주세요

 // goto;
 // #include <stdio.h>
 //
 // int main(void)
 // {
 //   int i = 0;
 //
 //   start:
 //    printf("-----------start--\n" );
 //    while(1) {
 //      i++;
 //      printf("%d\n", i);
 //
 //      if (i== 100)
 //        goto end;
 //      if (i==8)
 //      {
 //          i = 0;
 //        goto start;
 //      }
 //    }
 //   end:
 //    printf("--------end--------\n");
 //
 //  return 0;
 //
 // }


 #include <stdio.h>
 #include <windows.h>

 int main(void)
{
  system("chcp 65001");
  int num1;
  START:
    fflush(stdin);

    scanf("%d\n", &num1);

    if (num1 == 1)
      goto ONE;
    else if (num1 == 2)
      goto TWO;
    else
      goto EXIT;

    ONE:
      printf("1입니다. \n");
      goto START;
    TWO:
      printf("2입니다. \n");
      goto START;

EXIT:
   return 0;

}
