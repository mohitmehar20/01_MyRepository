// find the average of all elements in an aray 
import java.util.Scanner;
class AverageOfArray {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("enter marks of students : ");
        int [] marks = new int[5];
         for(int i=0 ; i < marks.length ; i++) {
           marks[i] = s.nextInt();
        }
        int sum = 0;
        for(int element : marks) {
            sum = sum + element;
        }
        System.out.println("The average marks of five students in physics : "+sum/marks.length);
    }
}