import java.util.Scanner;
public class MaximumAndMinimumElementInArray {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int [] array= new int[5];
		int max=0 ;
		for(int i=0;i<5;i++) {
			System.out.print("Enter element no. " +i+ " : ");
		array[i]=s.nextInt();
		}
		int min = array[0];
		for(int i=0 ; i<5 ; i++) {
			if (array[i] > max) {
				max = array[i];
			}
			if (array[i] < min) {
				min = array[i];
			}
		}
		System.out.println("\nGreatest element in the array is  "+max);
		System.out.println("Smallest element in the array is  "+min);
	}
}