#include <stdio.h>
int main()
{
    int b = 1, c;
    printf("enter a no.\n");
    scanf("%d", &c);
    while (b < 10)
    {
        printf("%d * %d = %d\n ", c, b, c * b);
        b = b + 1;
    }

    return 0;
}