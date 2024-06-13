#include <stdio.h>
#include <string.h>
#include <time.h>
int randomnumber(int n)
{
 srand(time(NULL));
 return rand()%n;
};
int main()
{
	char name[10];
	int player ,comp ,p=0,c=0;
	int op;
	printf("Enter name of Player : "); 
	scanf("%s",&name);
	for(int i=0; i < 3 ; i++)
	{
	    end:
	    end2:
	    printf("\n\nGet ready for round %d", i+1);
	printf("\nChoose \n1 for Rock\n2 for Paper\n3 for Sessor \n");
	scanf("%d",&op);
	switch (op)
	{
	case 1:
	player = 1;
	printf("%s have choosen Rock\n", name);
	break;
	case 2:
	player = 2;
	printf("%s have choosen Paper\n", name);
	break;
	case 3:
	player = 3;
	printf("%s have choosen Sessor\n", name);
	break;
	default:
	printf("Please choose a valid option");
	goto end2;
}
	if (randomnumber(300)>200)
	{
	    comp = 1;
	    printf("Computer have choosen Rock");
	}
	else if (randomnumber(300)>100)
	{
	    comp = 2;
	    printf("Computer have choosen Paper");
	}
	else 
	{
	    comp = 3;
	printf("Computer have choosen Sessor");
	}
	printf("\n");
	if (player==comp)
	{
	    printf("Match Draw!!!");
	    goto end;
	}
	
    else if (player==1 && comp==3)
	{
	    printf("%s is the WINNER!!!",name);
	    p++;
	}
	else if (player==2 && comp==1)
	{
	    printf("%s is the WINNER!!!",name);
	    p++;
	}
	else if (player==3 && comp==2)
	{
	    printf("%s is the WINNER!!!",name);
	    p++;
	}
	else if (player==3 && comp==1)
	{
	    printf("Computer is the WINNER!!!");
	    c++;
	}
	else if (player==1 && comp==2)
	{
	    printf("Computer is the WINNER!!!");
	    c++;
	}
	else if (player==2 && comp==3)
	{
	    printf("Computer is the WINNER!!!");
	    c++;
	}
	}
	printf("\n\n-------- Score --------\n%s =  %d\nComputer = %d",name ,p ,c);
	if(p>c)
	{
	    printf("\n\n%s is the final Winner!!!", name);
	}
	if(p<c)
	{
	    printf("\n\nComputer is the final Winner!!!");
    }
	return 0;
}