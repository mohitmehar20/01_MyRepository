#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    
    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
}

int main(int argc, char const *argv[])
{
    int arr[10] = {44,45,34,76,23,54,76,11,66,88};
    int n = 10;

    insertionSort(arr , n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
    
    return 0;
}
