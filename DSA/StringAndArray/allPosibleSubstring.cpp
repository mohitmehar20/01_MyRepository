#include<iostream>
#include<vector>
using namespace std;

vector<string> substring(const string &str){
    vector<string> subString;

    for(int i = 0; i<str.length(); i++){
        for(int j = 1; j <= str.length()-i ; j++){
            subString.push_back(str.substr(i, j));
        }
    } 
    return subString;
}


int main() {
    string str;
    cout<<"Enter a string : ";
    cin>>str;

    vector<string> Substr = substring(str);

    for (const string &sub : Substr) {
        cout << sub << endl;
    }
    
return 0;
}
