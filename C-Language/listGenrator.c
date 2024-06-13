#include <stdio.h>
#include <string.h>
#include <conio.h>

struct student 
{
  char name[20], grad;
  int rollno;
  int s1, s2, s3, s4, s5, perc;
};

int main()
{
  int n;
  struct student per[100];
  printf("Enter the no. of students : ");
  scanf("%d",&n);
  printf("-------------------------------------\n\n");
  for (int i = 0; i < n; i++)
  {
    printf("Enter details of student no. %d\n", i+1); 
    printf("\nName of student : ");
    scanf("%s", per[i].name);
    printf("Roll no.of student : ");
    scanf("%d", &per[i].rollno);
    printf("Marks obtain in 5 subject : ");
    scanf("%d %d %d %d %d", &per[i].s1, &per[i].s2, &per[i].s3, &per[i].s4, &per[i].s5);
    printf(" \n");
    per[i].perc=(per[i].s1+per[i].s2+per[i].s3+per[i].s4+per[i].s5)/5; 
     if (per[i].perc>=80)
    {
    	per[i].grad='A' ;    	
    }
        else if (per[i].perc>=65)
    {
    	per[i].grad='B' ;
    }
        else if (per[i].perc>=45)
    {
    	per[i].grad='C' ;
    }
        else if (per[i].perc>=33)
    {
    	per[i].grad='D' ;
    }
           else 
    {
    	per[i].grad='F' ;
    }
   }
      printf("List of all registered students\n");
      printf("______________________________________\n");
      printf("Rollno | Percentage | Grad |  Name\n");
      printf("______________________________________\n");
      for (int i = 0; i < n; i++)
  {
      printf("  %d   |    %d%%     |  %c   |  %s ", per[i].rollno, per[i].perc, per[i].grad, per[i].name);
    printf("\n");
  }
  return 0;
}