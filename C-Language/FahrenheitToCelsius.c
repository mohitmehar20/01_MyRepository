#include <stdio.h>
int main()
{
    int a, f, c;
    printf("choose any one option\n1. Fahrenheit to celsius\n2. Celsius to fahrenheit\nenter your choise\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("enter the value in fehrenhite\n");
        scanf("%d", &f);
        c = ((f - 32) * 5) / 9;
        printf("%dF = %dC", f, c);
        break;
    case 2:
        printf("enter the value in celsius\n");
        scanf("%d", &c);
        f = c * (9 / 5) + 32;
        printf("%dC = %dF", c, f);
        break;
    default:
        printf("invalde");
        break;
    }
    return 0;
}