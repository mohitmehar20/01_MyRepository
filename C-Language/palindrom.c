#include<stdio.h>
int main()
{ 
   
    int num1, num,rev=0;
    printf("Enter a number : ");
    scanf("%d",&num1);
    num=num1;
    while (num !=0)
    {
        rev = rev*10 + num%10;
        num = num/10;
    }
    printf("Reversed number of %d is %d\n", num1), rev);
    if(num==rev)
    {
        printf("%d is a palindromw number ",num1);
    }
    else
    {
        printf("%d is not a palindrome number ",num1);
    }
    return 0;
}