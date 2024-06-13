#include <iostream>
#include <math.h>
using namespace std;



int main()
{

    int n;
    cout << "enter a number : ";
    cin >> n;
    cout << "Binary presentstion of " << n ;

    int ans = 0;
    int position = 1;
    int i = 0;
    int ten = 1;
    while (n != 0)
    {

        int bit = n & 1;
        ans = (bit * ten) + ans;
        ten *= 10;
        n = n >> 1;
        

    }

    cout << " is " << ans;
}
