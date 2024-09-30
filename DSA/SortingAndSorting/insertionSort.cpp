#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    
    for(int i = 0; i<n-1; i++) {
        int j = i;
        while(j>0 && arr[j-1]>arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
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
