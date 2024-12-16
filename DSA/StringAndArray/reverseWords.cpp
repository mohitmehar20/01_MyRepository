#include <iostream>
using namespace std;

string reverseStr(string str, int s, int e)
{

    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
    return str;
}

string reverseWords(string str)
{
    int s = 0;
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == ' ' || str[i]=='\0')
        {
            str = reverseStr(str, s, i - 1);
            s = i + 1;
        }
    }
    return reverseStr(str , 0 , str.size()-1);
}
string removeSpace(string &str){


    int n = str.size();
    int cnt = 1;
    for (int i = 1; i < n; i++){
        if(str[i] == ' ' && str[i-1]==' '){
            str[cnt++] = str[i];
        }
    }    
    return str;
}

int main()
{

    string str = "Mohit   is a good    boy";
    cout<<reverseWords(removeSpace(str));

    return 0;
}