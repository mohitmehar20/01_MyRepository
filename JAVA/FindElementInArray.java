//To check wheather the given element is present in the array or not.
import java.util.Scanner;
class FindElementInArray {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int [] element = {10, 20, 33, 53, 76, 25, 75};
        boolean a = false;
        System.out.println("enter an elements : ");
        int el = s.nextInt();
        
        for(int i = 0 ; i < 7 ; i++) {
            if (el == element[i]) {
                System.out.println("yes "+el+"is present in the array at index no. "+i);
                a = true;
            }
        }
        if( a == false) {
             System.out.println(el+" is not present in the array");
        }
    }
}