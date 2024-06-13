// program for finding the Sum of elements of an array
class SumOfArrayElements{
    public static void main(String[] args) {
        int [] element = {10, 20, 33, 53, 76, 25, 75};
        int sum = 0;
        for(int i=0 ; i < element.length ; i++) {
            sum = sum +element[i];
        }
        System.out.println("Sum of five elements : "+sum);
    }
}