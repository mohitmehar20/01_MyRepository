#include <iostream>
using namespace std;
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for (int j = i + 1; j < n; j++)
        {

            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

void removeZero(int *arr, int n)
{
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] != 0))
        {
            arr[index++] = arr[i];
        }
    }
}
int main()
{
    int arr[10] = {44, 45, 34, 76, 23, 0, 0, 11, 0, 88};
    int n = 10;

    // call a funtion
    selectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
