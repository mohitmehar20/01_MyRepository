import java.util.Scanner;
public class ReversedArray {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int [] array= new int[5];
		int temp;
		for(int i=0;i<5;i++) {
			System.out.print("Enter element no. " +i+ " : ");
			array[i]=s.nextInt();
		}
		for(int i=0 ; i<5/2 ; i++) {
			temp = array[i];
			array[i] = array[4-i];
			array[4-i] = temp;
		}
		System.out.println("Reversed Elements : ");
		for(int i=0 ; i<5 ; i++) {
			System.out.println("Element no. " +i+ " : "+array[i]);
		}
	}
}