#include<iostream>
using namespace std;

// Given a string s, find the length of the longest 
// substring without repeating characters.

bool isValidStr( string s , int start, int end){
        for(int i = start; i <= end ; i++){
            for(int j = i+1 ; j<= end; j++){
                if(s[i] == s[j]){
                    return false;
                }
            }
        }
        return true;
    }

    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int max = 0;
        int len;
        int count = 0;
        for(int i = 0 ; i<n ; i++){
            for(int j = i ; j<n ; j++){
                if(isValidStr(s, i, j)){
                    len = j-i+1;
                    if(max < len){
                        max = len;
                    }
                }
            }
        }
        return max;
    }


int main() {

    string str = "abcabcbb";
    cout<<lengthOfLongestSubstring(str);

return 0;
}