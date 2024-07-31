#include <iostream>
using namespace std;

//   *
//   **
//   ***
//   ****
//   *****
void pattern1(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//       *
//      **
//     ***
//    ****
//   *****
void pattern2(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            cout << "_";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//    *****
//    ****
//    ***
//    **
//    *
void pattern3(int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

//    *****
//     ****
//      ***
//       **
//        *

void pattern4(int n)
{

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//    *****
//    ****
//    ***
//    **
//    *

void pattern5(int n)
{

    for (int i = 1; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//    *
//    **
//    * *
//    *  *
//    *   *
//    ******

void pattern6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i == n) || (j == 1) || (j == i))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

//        *
//       ***
//      *****
//     *******
//    *********

void pattern7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//       *
//      * *
//     *   *
//    *     *
//   *********

void pattern8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if ((j == 1) || (i == n) || (j == (2 * i - 1)))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

//   *********
//    *******
//     *****
//      ***
//       *

void pattern9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << "_";
        }
        for (int j = 2 * n - 1; j >= (2 * i - 1); j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//    *********
//     *******
//      *****
//       ***
//        *
//       ***
//      *****
//     *******
//    *********

void pattern10(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 2 * n - 1; j >= (2 * i - 1); j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
         for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//        *
//       ***
//      *****
//     *******
//    *********
//     *******
//      *****
//       ***
//        *
void pattern11(int n)
{
    for (int i = 1; i <= n; i++)
    {
         for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 2 * n - 1; j >= (2 * i - 1); j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

//        *
//       * *
//      *   *
//     *     *
//    *       *
//     *     *
//      *   *
//       * *
//        *

void pattern12(int n)
{
    for (int i = 1; i <= n; i++)
    {
         for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            if ((j == (2 * i - 1)) || (j == 1))
            {
                cout << "*";
            }
            else
            {
                cout<<" ";
            }
            
            
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 2 * n - 1; j >= (2 * i - 1); j--)
        {
            if ((j == (2 * i - 1)) || (j == (2 * n - 1)))
            {
                cout << "*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout << endl;
    }
}

int main()
{

    // int n;
    // cout<<"Enter no. of Rows: ";
    // cin>>n;

    pattern12(7);

    return 0;
}