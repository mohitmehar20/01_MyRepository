#include <stdio.h>
#include <string.h>

struct person
{
  char name[20];
  int rollno;
  int perc;
};

int main()
{
  int n;
  struct person per[20];
  printf("enter the no. of students : ");
  scanf("%d",&n);
  printf("\n\n");
  for (int i = 0; i < n; i++)
  {

    printf("Name of student no. %d : ", i+1);
    scanf("%s", per[i].name);
    printf("Roll no.of student no. %d : ", i+1);
    scanf("%d", &per[i].rollno);
    printf("10th percentage of student no. %d: ", i+1);
    scanf("%d", &per[i].perc);
    printf(" \n");
  }
  printf("List of all registered students\n");
   printf("Roll no.           Name          10th percentage \n");
  for (int i = 0; i < n; i++)
  {
   
    printf(" %d                %s            %d%%", per[i].rollno, per[i].name, per[i].perc);

    printf("\n");
  }
  return 0;
}