#include<iostream>
using namespace std;

// int binarySearch(int arr[], int size, int key) {

//     int start = 0;
//     int end = size-1;

//     int mid = start + (end-start)/2;

//     while(start <= end) {

//         if(arr[mid] == key) {
//             return mid;
//         }

//         //go to right wala part
//         if(key > arr[mid]) {
//             start = mid + 1;
//         }
//         else{ //key < arr[mid]
//             end = mid - 1;
//         }

//         mid = start + (end-start)/2;
//     }
    
//     return -1;
// }
int findPivot(int arr[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0]){
            s = mid+1;
        }
        else if(arr[mid] < arr[0])
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int binarySearch(int arr[], int start, int end, int key) {

    
    int mid = start + (end-start)/2;

    while(start <= end) {

        if(arr[mid] == key) {
            return mid;
        }

        //go to right wala part
        if(key > arr[mid]) {
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    
    return -1;
}

int search(int arr[], int n, int k)
{
    int pvt = findPivot(arr, n);
    if(k >= arr[pvt] && k <= arr[pvt-1]){
        return binarySearch(arr, pvt, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pvt-1, k);
    }
}


int main() { 

    int even[6] = {6,8,12,18,2,4};
    int odd[5] = {3, 8, 11, 14, 16};

    // int evenIndex = binarySearch(even, 6, 6);

    // cout << " Index of 6 is " << evenIndex << endl;

    // int oddIndex = binarySearch(odd, 5, 14);

    // cout << " Index of 14 is " << oddIndex << endl;

    cout<<search(even, 6, 12);

    return 0;
}
