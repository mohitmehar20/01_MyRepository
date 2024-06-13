#include <iostream>
using namespace std;

int fact(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int nCr(int n, int r)
{
    int num = fact(n);
    int deno = fact(r) * fact(n - r);

    return num / deno;
}

int main()
{
    int n, r;
    cout << "n = ";
    cin >> n;
    cout << "r = ";
    cin >> r;
    cout << "nCr = " << nCr(n, r);

    return 0;
}