import java.util.Scanner;
public class MatricesSum {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int [][] A = new int [2][3];
		int [][] B = new int [2][3];
		System.out.print("Enter the Demensions of matrices :	");
		int r = s.nextInt();
		int c = s.nextInt();
		System.out.print("Enter matrix A \n");
		for(int i=0 ; i<r ; i++) {
			for(int j=0 ; j<c ; j++) {
				A[i][j] = s.nextInt();
			}
		}
		System.out.print("Enter matrix B \n");
		for(int i=0 ; i<r ; i++) {
			for(int j=0 ; j<c ; j++) {
				B[i][j] = s.nextInt();
			}
		}
		System.out.print("Sum of matrices A and B : \n");
		for(int i=0 ; i<r ; i++) {
			for(int j=0 ; j<c ; j++) {
				System.out.print(A[i][j]+B[i][j]+"	");
			}
			System.out.print("\n");
		}
	}
}