import java.util.Scanner;
import java.util.Random;
public class RPS3rounds {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Random r = new Random();
		System.out.print("Enter your name : ");
		String name = s.nextLine();
		System.out.println("\nEnter \n1 for Rock \n2 for Scissors\n3 for Paper");
		int player , comp;
		int random = r.nextInt(99);
	    int c=0 , p=0 ;
	    for(int i = 1; i <= 3; i++) {
	    	System.out.printf("\nWelcome to Round %d \nPlease Enter your choise :  ", i);
	    	player = s.nextInt();
	    switch (player) {
	    	case 1 : {
	        System.out.println(name+ " have choosen Rock ");
	        break;
	    	}
	    	case 2 : {
	        System.out.println(name+ " have choosen Scissors ");
	        break;
	    	}
	    	case 3 : {
	        System.out.println(name+ " have choosen Paper ");
	        break;
	    	}
	    	default : {
	    	System.out.println("Invalide option");
	    	}	
	    }
	    
	    if (random <= 33) {
	    	comp = 1 ;
	    	System.out.println("Computer have choosen Rock ");
	    }
	  else if (random <= 66) {
	    	comp = 2 ;
	    	System.out.println("Computer have choosen Scissors ");
	    }
	   else {
	    	comp = 3 ;
	    	System.out.println("Computer have choosen Paper ");
	    }
	    
	    if (player == comp) {
	    	System.out.println("Match draw");
	    }
	    if (player == 1 && comp == 2) {
	    	System.out.println(name+" is Winner ");			p++;
		}
	    if (player == 2 && comp == 3) {
	    	System.out.println(name+" is Winner ");			p++;
	    }
	    if (player == 3 && comp == 1) {
	    	System.out.println(name+" is Winner ");			p++;
	    }
	    if (player == 2 && comp == 1) {
	    	System.out.println("Computer is Winner");
	    	c++;
	    }
	    if (player == 3 && comp == 2) {
	    	System.out.println("Computer is Winner");
	    	c++;
	    }
	    if (player == 1 && comp == 3) {
	    	System.out.println("Computer is Winner");
	    	c++;
	    }
	    }
	    System.out.printf("\n-----Score-----\n%s = %d\nComputer = %d", name , p , c);
	    if(p > c) {
	    	System.out.printf("\n\n×××××××× %s is Final Winner ×××××××× ",name);
	    }
	    if(c > p) {
	    	System.out.println("\n\n×××××××× Computer is Final  Winner ××××××××");
	    }
	    if(c == p) {
	    	System.out.println("\n\n××××××× Final score is a draw ×××××××");
	    }
	}
}