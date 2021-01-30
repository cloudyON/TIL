//chapter 04-01


/*
   배열
   배열 선언
   1차원 2차원 배열
*/

#include <stdio.h>
#include <windows.h>
int main(void) {
  int student[5];
  // 밑에다가 선언하는 것을 별로 않좋다.
  system("chcp 65001");
  int sum = 0;
  int *studentPtr = student;

  student[0] = 1;
  student[1] = 1;
  student[2] = 1;
  student[3] = 1;

  // printf("%d\n", student);
  // printf("%d\n", student[0]);
  // printf("%d\n", student[1]);
  // printf("%d\n", student[2]);
  // printf("%d\n", student[3]);
  // printf("%d\n", student[4]);

  printf("-----------------------------------------\n");
  for (int i = 0; i < sizeof(student) / sizeof(int); i++ ){
    printf("%d\n", student[i]);
  };

  printf("------------------------------------------\n");
  int student2[] = {1,1,1,1,1};

  for (int i = 0; i < sizeof(student2) / sizeof(int); i++ ){
    printf("%d\n", student2[i]);
  };
  printf("-----------------------\n");

  //배열 요소에 접근하여 길을 수정.
  for (int i = 0; i < sizeof(student2) / sizeof(int); i++ ){
    student2[i]  *= 20;
    printf("%d\n", student2[i]);
  };
   // 합계
   for (int i = 0; i < sizeof(student) / sizeof(int); i++ ){
     sum += student2[i];
   };

   printf("모든 요소 값의 합은 %d 이다 \n", sum);

   printf("모든 요소의 평균값은 %d이다 \n", sum / (sizeof(student2) / sizeof(int)));
   printf("-----------------------------------\n");
   // 배열의 포인터
   student[0] = 100;
   printf("%p\n", studentPtr); //배열의 첫번째 요소 값이 나왔다.
   printf("%d\n", *studentPtr);
   printf("%d\n", studentPtr[3]); // 배열의 첫번째 요소 값이 아닌 값 출력할때

   printf("%d\n", sizeof(student)); // 배열의 크기
   printf("%d\n", sizeof(studentPtr)); // 배열 포인터의

   return 0;

}
