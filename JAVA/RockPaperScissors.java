import java.util.Scanner;
import java.util.Random;
public class RockPaperScissors {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		Random r = new Random();
		System.out.print("Enter your name : ");
		String name = s.nextLine();
	    System.out.print("\nEnter \n1 for Rock \n2 for Scissors\n3 for Paper\nEnter your choise :  ");
		int player = s.nextInt();
		int random = r.nextInt(99);
	    int comp;
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
	    	System.out.println(name+" is Winner ");		}
	    if (player == 2 && comp == 3) {
	    	System.out.println(name+" is Winner ");		}
	    if (player == 3 && comp == 1) {
	    	System.out.println(name+" is Winner ");		}
	    if (player == 2 && comp == 1) {
	    	System.out.println("Computer is Winner");
	    }
	    if (player == 3 && comp == 2) {
	    	System.out.println("Computer is Winner");
	    }
	    if (player == 1 && comp == 3) {
	    	System.out.println("Computer is Winner");
	    }
	}
}