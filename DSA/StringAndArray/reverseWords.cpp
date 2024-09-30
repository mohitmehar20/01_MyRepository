#include <iostream>
using namespace std;

string reverseWord(string str, int s, int e)
{

    while (s < e)
    {
        swap(str[s++], str[e--]);
    }
    return str;
}

string reverseStr(string str)
{
    int s = 0;
    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == ' ' || str[i]=='\0')
        {
            str = reverseWord(str, s, i - 1);
            s = i + 1;
        }
    }
    return str;
}
void removeSpace(string &str){

    int cnt = 1;
    int n = str.size();
    for (int i = 1; i < n; i++){
        if(str[i] == ' ' && str[i-1]==' '){
            str[cnt] = str[i];
            cnt++;
        }
    }    
}

int main()
{

    string str = "Mohit   is a good    boy";
    removeSpace(str);
    cout <<str;

    return 0;
}