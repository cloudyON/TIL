
// Chapter 04-04

/*
# 구조체
- 구조체로 명함만들기
- 구조체 중첩 구조

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct fallow{
  char fallowing[20];
  char fallow[20];
};

struct point{
  int used_point;
  int Total_point;
};

struct Card{
  char name[20];
  int age;
  char address[100];
  struct point p;
  struct fallow fal;
};


int main(void){
  struct Card card1;
  struct Card card2;

  printf("-----------------------------------\n");
  strcpy(card1.name, "dong gyun");
  card1.age = 14;
  strcpy(card1.address, "Apgujeong-dong, Yongsan-gu, Seoul");
  card1.p.used_point = 1000;
  card1.p.Total_point = 2000;

  printf("%s\n", card1.name);
  printf("%d\n", card1.age);
  printf("%s\n", card1.address);
  printf("current point : %d\n", card1.p.Total_point - card1.p.used_point);
  printf("-------------------\n");

  strcpy(card2.name, "won sang");
  card2.age = 14;
  strcpy(card2.address, "Yeoksam-dong, gangnam-gu, seoul");
  card2.p.used_point = 100;
  card2.p.Total_point = 200;

  printf("%s\n", card2.name);
  printf("%d\n", card2.age);
  printf("%s\n", card2.address);
  printf("current point : %d\n", card2.p.Total_point - card2.p.used_point);
  printf("-------------------\n");


  printf("dong gyun is charging point 2000\n");
  card1.p.Total_point += 2000;
  printf("donggyun donated 200 points to wonsang");
  card1.p.used_point += 200;
  card2.p.Total_point += 200;


  printf("%s\n", card1.name);
  printf("%d\n", card1.age);
  printf("%s\n", card1.address);
  printf("current point : %d\n", card1.p.Total_point - card1.p.used_point);
  printf("-------------------\n");

  printf("%s\n", card2.name);
  printf("%d\n", card2.age);
  printf("%s\n", card2.address);
  printf("current point : %d\n", card2.p.Total_point - card2.p.used_point);
  printf("-------------------\n");



  strcpy(card1.fal.fallowing, "won sang");
  strcpy(card1.fal.fallow, "cocoa");

  printf("%s is fallowing donggyun\n", card1.fal.fallowing);
  printf("donggyun fallowed %s\n", card1.fal.fallow);
  printf("----------------------\n" );
  strcpy(card2.fal.fallowing, "donggyun");
  strcpy(card2.fal.fallow, "icecream");

  printf("%s is fallowing won sang\n", card2.fal.fallowing);
  printf("won sang fallowed %s\n", card2.fal.fallow);




};
