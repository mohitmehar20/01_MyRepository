#include<iostream>
using namespace std;

void toUpperCase(string &str){
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 'a'-'A';
        }
    }
}
void toLowerCase(string &str){
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] += 'A'-'a';
        }
    }
}

int main() {

    string str;
    cout<<"enter a string : ";
    cin>>str;


    toLowerCase(str);
    cout<<"Upper case : "<<str<<endl;
    toUpperCase(str);
    cout<<"Lower case : "<<str;
    

return 0;
}