#include<stdio.h>
int main()
{
    int a, b;
    printf("enter your age\n");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("you can vote\n");
    }
    else{
        printf("you can't vote since your age is below 18");
    }
   
    return 0;
}