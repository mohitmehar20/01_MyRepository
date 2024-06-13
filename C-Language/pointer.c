#include <stdio.h>
int main()
{
    int i = 25;
    int* j;
    int* k;
    j = &i;
    k = &j;

    printf("the value of i is %d\n", *(&k));
    printf("the address of i is %d", *k);
    return 0;
}