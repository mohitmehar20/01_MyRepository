#include <stdio.h>
#include <string.h>

struct person
{
    char name[20];
    int rollno;
    int s1, s2, s3, s4, s5, total;
};

int main()
{
    int n;
    struct person per[20];
    printf("enter the no. of students : ");
    scanf("%d", &n);
    printf("\n\n");
    for (int i = 0; i < n; i++)
    {

        printf("Name of student no. %d : ", i + 1);
        scanf("%s", per[i].name);
        printf("Roll no.of student no. %d : ", i + 1);
        scanf("%d", &per[i].rollno);
        printf("Enter marks of five subjects : ", i + 1);
        scanf("%d %d %d %d %d", &per[i].s1, &per[i].s2, &per[i].s3, &per[i].s4, &per[i].s5);
        printf(" \n");
        per[i].total = per[i].s1 + per[i].s2 + per[i].s3 + per[i].s4 + per[i].s5;
    }
    printf("List of all registered students\n");
    printf("Roll no.       Percentage       Name \n");
    for (int i = 0; i < n; i++)
    {

        printf(" %d                  %d%%                    %s", per[i].rollno, per[i].total / 5,per[i].name);

        printf("\n");
    }
    return 0;
}