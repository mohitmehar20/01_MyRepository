#include<iostream>
using namespace std;


// convert from the lower Case to the upper Case character
char toUpperCase(char a){
    char temp;
    if (a >= 'a' && a <= 'z')
    {
        temp = a - 'a' + 'A';
        return temp;
    }

    return a;
}

// convert from the upper Case to the lower Case character
char toLowerCase(char a){
    char temp;
    if (a >= 'A' && a <= 'Z')
    {
        temp = a - 'A' + 'a';
        return temp;
    }
    return a;
}

bool isValid(char ch){
    if ( ( ch >= 'a' &&  ch <= 'z') || ( ch >= 'A' &&  ch <= 'Z')){
        return true;
    }
    return false;
} 

bool checkPalindrome(string str){
    string temp = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (isValid(str[i]))
        {
           temp.push_back(str[i]);
        }
    }
    cout << temp << endl; 

    int e =  temp.length() - 1;
    int s = 0;
    while (s<=e)
    {
        if (toLowerCase(temp[s++]) != toLowerCase(temp[e--]))
        {
            return false;
        }
    }
    return true;
}

int main() {

   string str = "Mo39hI809h88om";
  
   cout << "Palindrome or not : "<< checkPalindrome(str);



return 0;
}