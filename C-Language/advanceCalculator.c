#include <stdio.h>
int main()
{
    float a, b, s;
    char c;
    // step 1. enter the first no.
    // step 2. enter the oprator ('+', '-', '*', '/')
    // step 3. enter the other no. 
    // step 4. press enter key for result
    scanf("%f %c %f", &a, &c, &b);

    switch (c)
    {
    case '+':
        s = a + b;
        break;
    case '-':
        s = a - b;
        break;
    case '*':
        s = a * b;
        break;
    case '/':
        s = a / b;
        break;
    default:
        printf("invalide operator");
    }
    printf("= %f", s);
    return 0;
}