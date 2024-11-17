#include<iostream>
#include<vector>
using namespace std;

int findPIndex(vector<int> &arr, int low, int high){
    int pivote = arr[low];
    int i = low;
    int j = high;

    while(i<j){
        while(arr[i] <= pivote && i <= high-1){
            i++;
        }
        while(arr[j] > pivote && j >= low+1){
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void QSort(vector <int> &arr, int low, int high){
    if(low<high){
        int pIndex = findPIndex(arr , low, high);

        QSort(arr, low, pIndex-1);
        QSort(arr, pIndex+1, high);
    }
}


int main() {

    vector<int> arr = {44, 45, 34, 76, 23, 54, 76, 11, 66, 88};
    int n = 10;

    QSort(arr, 0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

return 0;
}