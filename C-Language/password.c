#include <stdio.h>
int main()
{
    int a;
     printf("Enter a four digit password\n");
    for (int i = 5; i > 0; i--)
    {
        printf("\nYou only have %d attempts\n", i);
        scanf("%d", &a);

        if (a == 2002)
        {
            printf("CORRECT PASSWORD\n");
            goto end;
        }

        else
        {
            printf("INCORRECT PASSWORD\n");
        }
    }
end:

    return 0;
}