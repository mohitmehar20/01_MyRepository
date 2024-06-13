#include<stdio.h>
#include<time.h>
int randomnumber(int n)
{
    srand(time(NULL));
 
    return rand()%n;
}
int main()
{
    printf("random Number is %d", randomnumber(1000));
return 0;
}