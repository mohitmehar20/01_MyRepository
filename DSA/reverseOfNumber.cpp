#include<iostream>
using namespace std;

int reverseOf(int num){
    int ans = 0;
    while (num != 0)
    {
        int digit = num % 10;
        ans = ans*10 + digit;
        num = num / 10;
    }
    return ans;
}


int main() {

    int num;
    cout <<"enter a numeber : ";
    cin>>num;

    cout << "Reverse of "<<num<<" is "<<reverseOf(num);

return 0;
}