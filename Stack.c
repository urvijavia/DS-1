#include<stdio.h>
#include "Stack.h"
int main()
  {
  int choice,i;
  STACK s;
  init(&s);
  printf ("%10s \b\b\b\bSTACK OPERATION\r");
  while (choice!=9)
      {
            printf ("1:PUSH\n2:POP\n3:DISPLAY\n4:PEEP\n5:CHANGE\n9:EXIT\n0:LIVE \n\nEnter your choice\n");
            scanf("%d", &choice);
            system("cls");
            switch (choice)
              {
              case 1:
                push(&s);
                live(&s);
                break;
              case 2:
                pop(&s);
                live(&s);
                break;
              case 3:
                display(&s);
                break;
              case 4:
                peep(&s);
                break;
              case 5:
                change(&s);
                live(&s);
                break;
              case 9:
                return 0;
              case 0:
                live(&s);
              default:
                continue;
              }
      }
  return (0);
  }
