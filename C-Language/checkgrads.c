#include <stdio.h>
int main()
{

    int a;
    printf("enter your marks to check your grades\n");
    scanf("%d", &a);
    if (a <= 30)
    {
        printf("you got F");
    }
   else if (a <= 49)
    {
        printf("you got D");
    }
   else if (a <= 64)
    {
        printf("you got C");
    }
   else if (a <= 79)
    {
        printf("you got B");
    }
   else if (a <= 100)
    {
        printf("you got A");
    }
    else
    {
        printf("invalide marks");
    }

    return 0;
}