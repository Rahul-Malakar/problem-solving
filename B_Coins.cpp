// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);

    int a = 0, b = 0, c = 0;
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;
        if (s == "A>B" || s == "B<A")
        {
            a++;
            b--;
        }
        else
        {
            b++;
            a--;
        }
        if (s == "B>C" || s == "C<B")
        {
            b++;
            c--;
        }
        else
        {
            b--;
            c++;
        }
        if (s == "C>A" || s == "A<C")
        {
            c++;
            a--;
        }
        else
        {
            a++;
            c--;
        }
    }
    if (a == 0 && b == 0 && c == 0)
    {
        cout << "Impossible";
    }
    else
    {
        if (a == 0 && b == 2)
        {
            cout << "CAB";
        }
        else if (b == 0 && a == 2)
        {
            cout << "CBA";
        }
        else if (b == 0 && c == 2)
        {
            cout << "ABC";
        }
        else if (c == 0 && b == 2)
        {
            cout << "ACB";
        }
        else if (c == 0 && a == 2)
        {
            cout << "BCA";
        }
        else if (a == 0 && c == 2)
        {
            cout << "BAC";
        }
    }

    return 0;
}