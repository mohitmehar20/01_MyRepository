#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        // for round 1 to n-1
        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {

            // process element till n-i th index
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            // already sorted
            break;
        }
    }
}

int kthSmallest(int arr[], int l, int r, int k)
{
    for (int i = 0; i < k; i++)
    {
        bool swapped = false;

        for (int j = r; j > 0; j--)
        {
            if (arr[j - 1] > arr[j])
                swap(arr[j], arr[j - 1]);
                swapped = true;
        }
        if (swapped == false)
        {
            break;
        }
    }
    return arr[k - 1];
}

int main(int argc, char const *argv[])
{
    int arr[10] = {44, 45, 34, 76, 23, 54, 76, 11, 66, 88};
    int n = 10;

    bubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl<<kthSmallest(arr, 0 , 9 , 4);

    return 0;
}
