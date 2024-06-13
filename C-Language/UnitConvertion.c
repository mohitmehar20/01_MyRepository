#include <stdio.h>
int main()
{
    int op, a, i;
    float b;
    for (i = 0; i < 10; i++)
    {
        printf("1. km to miles\n");
        printf("2. inches to foot\n");
        printf("3. cm to inches\n");
        printf("4. pounds to Kg\n");
        printf("5. inches to meters\n");
        printf("press 0 to exit\n");
        printf("enter any option\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            printf("enter the value you want to convert\n");
            scanf("%d", &a);
            b = a * 0.621;
            printf("%d km = %f miles\n", a, b);
            break;
        case 2:
            printf("enter the value you want to convert\n");
            scanf("%d", &a);
            b = a * 0.0833;
            printf("%d inches = %f ft\n", a, b);
            break;
        case 3:
            printf("enter the value you want to convert\n");
            scanf("%d", &a);
            b = a * 0.394;
            printf("%d cm = %f inche\n", a, b);
            break;
        case 4:
            printf("enter the value you want to convert\n");
            scanf("%d", &a);
            b = a * 0.454;
            printf("%d lbs = %f km\n", a, b);
            break;
        case 5:
            printf("enter the value you want to convert\n");
            scanf("%d", &a);
            b = a * 0.0254;
            printf("%d inches = %f meter\n", a, b);
            break;
        case 0:
            goto end;
        default:
            printf("invalide");
            break;
        }
    }
end:
    return 0;
}