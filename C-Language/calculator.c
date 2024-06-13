#include <stdio.h>
int main(int argc, char const *argv[])
{
     int s, a, b, opration, i;
     printf("given opration are\n 1. Add\n 2. Subtract\n 3. Multiply\n 4. Divide\n");
     printf("enter the opration\n");
     scanf("%d", &opration);
    
          switch (opration)
          {
          case 1:

               printf("enter two numbers:\n");
               scanf("%d %d", &a, &b);
               s = a + b;
               printf("%d + %d = %d\n", a, b, s);
               break;
          case 2:

               printf("enter two numbers:\n");
               scanf("%d %d", &a, &b);
               s = a - b;
               printf("%d - %d = %d\n", a, b, s);
               break;
          case 3:

               printf("enter two numbers:\n");
               scanf("%d %d", &a, &b);
               s = a * b;
               printf("%d * %d = %d\n", a, b, s);
               break;
          case 4:

               printf("enter two numbers:\n");
               scanf("%d %d", &a, &b);
               s = a / b;
               printf("%d / %d = %d\n", a, b, s);
               break;

          default:
               printf("invalide option\a\n");
          }
     
     return 0;
}