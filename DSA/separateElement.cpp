#include<iostream>
using namespace std;

void segregateElements(int arr[],int n)
    {
        int i = 0 ;
        int j = n-1 ;
        while(i<j)
        {
            if((arr[i] < 0) && (arr[j] > 0)){
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
            else if(arr[i] > 0 ){
                i++;
            }
            else if(arr[j] < 0 ){
                j--;
            }
        }
    }


int main() {

    int arr[5] = {-1, 3, -4, 9, 4};
    int n = 5;
    segregateElements(arr , n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}