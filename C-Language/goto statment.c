#include <stdio.h>
int main()
{
    int num, i;
    for (i = 0; i < 10; i++)
    {
        printf("welcome\n");
        for (int j = 0; j < 8; j++)
        {
            printf("enter any no. or press 0 to exit\n ");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:
    return 0;
}