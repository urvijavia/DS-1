#include<stdio.h>
#include<stdlib.h>
#include "Stack.h"
#define MAXlen 50
int isOperator(char ch)
  {
    if(ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^'||ch=='%')return 1;
    else {return 0;}
  }
int Prec(char ch)
  {
    switch (ch)
      {
      case ')':return 5;
      case '^':return 4;
      case '*':
      case '/':
      case '%':return 3;
      case '+':
      case '-':return 2;
      case '(':return 1;
      default:return 0;
      }
  }
int i2f(char *in,char *post)
        {
          int i=0;
          STACK s;
          init(&s);
          char ch,op[MAXlen]="";
      while(*in!='\0')
        {
          printf("%s\n",*in);

          if (*in=='(')

                  {
                    push(&s,*in);
                  }

          else if (*in==')')

                  {
                  while((ch=pop(&s))=='(')
                  {
                    *post=ch;
                    op[i]=ch;
                    post++;
                    i++;
                  }
                  }

          else if (isOperator(*in))

                  {
                  while(Prec(*in)<=Prec(peep(&s)))
                  {
                    *post=pop(&s);
                    op[i]=*post;
                    post++;
                    i++;
                  }
                  push(&s,*in);
                  }

          else

                  {
                    *post=*in;
                    op[i]=*post;
                    post++;
                    i++;
                  }

          in++;
          display(&s);
          printf("%s\n",op[i]);
        }
      }
int main()
                  {
                    char in[MAXlen]="",post[MAXlen]="";
                    printf("Enter a infix expression.! \n");
                    fgets(in,50,stdin);
                    i2f(in,post);
                    printf("Postfix expression is: \n");
                    return 0;
                  }
