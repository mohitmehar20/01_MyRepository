import java.util.Scanner;
public class SortedAndUnsortedArray {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Size of array : ");
		int n = sc.nextInt();
		int [] array= new int[n];
		int a = 0 , d = 0;
		for(int i=0;i<n;i++) {
			System.out.print("Enter element no. " +i+ " : ");
		array[i]=sc.nextInt();
		}
		for(int i=0 ; i<n-1; i++) {
			if( array[i] <= array[i+1]) {
				a++;
			}
			if( array[i] >= array[i+1]) {
				d++;
			}
		}
		if (a==array.length-1) {
			System.out.println("\nArray is sorted in Ascending order");
		}
		else if (d==array.length-1) {
			System.out.println("\nArray is sorted in Descending order");
		}
		else {
			System.out.println("\nArray is not sorted");
		}
	}
}