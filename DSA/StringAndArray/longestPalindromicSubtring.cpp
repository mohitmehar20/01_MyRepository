#include <iostream>
using namespace std;
// Approach No. 1
int ispalindrome(string str, int l, int r)
{
    while (l <= r)
    {
        if (str[l++] != str[r--])
            return 0;
    }
    return 1;
}

string longestPalindrome(string s)
{
    if (s.empty() || s.size() == 1)
        return s;

    int i = 1;
    int l = 0;
    int r = s.size() - 1;
    while (l < r)
    {
        while (r < s.size())
        {
            if (ispalindrome(s, l, r))
                return s.substr(l, r - l + 1);
            l++;
            r++;
        }
        l = 0;
        r = s.size() - 1 - i;
        i++;
    }
    return s.substr(0, 1);
}

// approach no. 2

string expandPalindrome(string str, int l, int r)
{
    while (l >= 0 && r < str.size() && str[l] == str[r])
    {
        l--;
        r++;
    }
    return str.substr(l + 1, r - l - 1);
}

string longestPalindrome2(string s)
{
    if (s.empty() || s.size() == 1)
        return s;

    string longStr;
    for (int i = 0; i < s.size(); i++)
    {

        string even = expandPalindrome(s, i, i + 1);
        if (even.size() > longStr.size())
        {
            longStr = even;
        }

        string odd = expandPalindrome(s, i, i);
        if (even.size() > longStr.size())
        {
            longStr = odd;
        }
    }

    return longStr;
}
int main()
{

    string str = "sjidksiskdisff";
    cout << longestPalindrome(str);

    return 0;
}
