import java.util.Scanner;
public class Array {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int [] marks= new int[5];
		for(int i=0;i<5;i++) {
			System.out.print("Enter element no. " +i+ " : ");
		marks[i]=s.nextInt();
		}
		System.out.print("Elements are  : ");
		for(int element : marks) {
			System.out.print(element+" ");
		}
	}
}