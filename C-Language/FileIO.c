#include<stdio.h>
int main()
{
    printf("time is %s\n ",__TIME__);
    printf("date is %s\n",__DATE__);
    printf("file name is %s\n", __FILE__);
    printf("line no. is %s",__LINE__);
    return 0;

}