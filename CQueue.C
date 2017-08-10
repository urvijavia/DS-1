#include<stdio.h>
#include <stdlib.h>
#include "CQueue.h"
int main()
 {
  QUEUE q;
  init(&q);
  int op;
  do{
    printf("Enter the Number of the operation to be performed:\n");
    printf(" 1. Insert\n 2. Display\n 3. Delete\n 4. Peak\n 5. Change\n 0. Exit\n");
    scanf("%d",&op);
    printf("\n\n");
    switch (op)
    {
    case 1:
      insert(&q);
      op=1;system("cls");
      break;
    case 2:
      display(&q);
      op=2;system("pause");system("cls");
      break;
    case 3:
      del(&q);
      op=3;system("pause");system("cls");
      break;
    case 4:
      peak(&q);
      op=4;system("pause");system("cls");
      break;
    case 5:
      change(&q);
      op=5;system("pause");system("cls");
      break;
    case 0:
      printf("Exit\n");
      break;
    default:
     continue;
     break;
    }
  } while(op!=0);
 return 0;
 }
