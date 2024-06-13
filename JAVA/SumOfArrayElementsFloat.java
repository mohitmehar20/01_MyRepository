// program for finding the Sum of float elements of an array
public class SumOfArrayElementsFloat{
    public static void main(String[] args) {
        float [] elements = {10.5f , 20.5f, 30.5f, 25.5f, 10.5f};
        float sum = 0;
        for(int i=0; i<=4; i++) {
            sum = sum +elements[i];
        }
        System.out.println("Sum of five elements : "+sum);
    }
}