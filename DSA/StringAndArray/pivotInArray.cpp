#include <iostream>
using namespace std;

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

int main()
{

    int arr[6] = {8, 9, 1, 3, 5, 6};
    cout << findPivot(arr, 6);

    return 0;
}