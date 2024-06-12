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

int main()
{

    string str = "Mohit is a good boy";
    cout << reverseStr(str);

    return 0;
}