import java.util.Scanner;
public class SwitchCase {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int a = s.nextInt();
		switch (a) {
		case 1 : {
			 System.out.print("one");
			 break;
		}
		case 2 : {
			 System.out.print("two");
			 break;
		}
		case 3 : {
			 System.out.print("three");
			 break;
		}
		default : {
			 System.out.print("nothing");
		}
		}
	}
}