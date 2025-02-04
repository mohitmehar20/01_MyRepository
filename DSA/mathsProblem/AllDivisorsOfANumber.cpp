#include<iostream>
#include<vector>
using namespace std;

void allDivisors(int n){
    // vector<int> answer;
    for(int i = 1; i*i < n; i++){
        if(n%i == 0){
            cout<<i<<" "<<n/i<<" ";
        }
    }
}


int main() {

    allDivisors(36);

return 0;
}