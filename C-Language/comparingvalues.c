#include<stdio.h>
int main()
{
    int a , b;
    printf("enter the two values you want to compare\n");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        /* code */
        printf("%d is greater than %d", b, a);
    }
    else if (a > b)
    {
        /* code */
        printf("%d is greater than %d", a , b);
    }
    else 
    {
        printf("both values are equal");
    }
    return 0;
}
