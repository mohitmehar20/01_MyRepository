#include<stdio.h>
int main()
{
   
   int a;
    printf("enter your marks to check your grades\n");
    scanf("%d",&a);
    if (a<=30)
    {
       printf("you got F");
    }
     if (39<a<=49)
    {
       printf("you got D");
    }
     if (49<a<=64)
    {
       printf("you got C");
    }
     if (64<a<=79)
    {
       printf("you got B");
    }
     if (79<a<=100)
    {
       printf("you got A");
    }
    else
    {
        printf("invalide marks");
    }
    
    return 0;
}