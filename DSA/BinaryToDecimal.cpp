#include<iostream>
#include<math.h>
using namespace std;

// if the binary number is in string form

int lengthOf(char str[]){
    int len = 0;
    while(str[len] != '\0' ){
        len++;
    }
    
    return len;
}
int binary_to_decimal(char str[]) {
    int ans = 0;
    int length = lengthOf(str);
    int powOfTwo = 1;
    int i = length-1;
    while ( i >= 0 ){
        if( str[i] == '1' ){
            ans = ans + powOfTwo;
        }
        powOfTwo = powOfTwo * 2;
        i--;
    }
    
    return ans;
}

int main() {
    int n;
    cout <<"Enter a binary number : ";
    cin >> n;

    int i = 0;
    int ans = 0;
    while( n != 0){

        int bit = n % 10;
        if(bit == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n/10;
        i++;
    }

    cout<<"Decimal number = "<< ans;

return 0;
}