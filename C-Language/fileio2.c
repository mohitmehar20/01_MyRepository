#include<stdio.h>
int main()
{
    FILE *ptr = NULL;
    char string[50];

    ptr = fopen("myfile.txt","r");
    fscanf(ptr,"%s", string);
    printf("file contain = %s", string);

    return 0;
}