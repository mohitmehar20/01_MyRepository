#include<stdio.h>
#include<stdlib.h>
int main()
{
char* eid;
int n , i=0;
while(i<3)
{
printf("employee no. %d\n", i+1);
printf("enter no. of characters in eID : ");
scanf("%d", &n);
eid=(char*)malloc((n+1)*sizeof(char));
printf("enter eID : ");
scanf("%s", eid);
printf("your eID no. is : ");
puts(eid);
free(eid);
i++;
}


return 0;
}
