#include <stdio.h>
int main()
{
    int a, b = 1;
    printf("you want multiplication table of = ");
    scanf("%d", &a);
    do
    {
        printf("%d X %d = %d\n", a, b, a * b);
        b = b + 1;

    } while (b < 11);
    return 0;
}