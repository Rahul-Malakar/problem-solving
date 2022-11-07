// Rahul Malakar 2112022

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{

    ios_base::sync_with_stdio(false);

    string s;
    cout << "Your name : ";
    cin >> s;
    
    int attempts = 0;

    for (ll i = 0; i < 3; i++)
    {
        int marks = 0;
        attempts++;
        int ans = 0;
        cout << "What is atomic number of Hydrogen?" << endl;
        cin >> ans;
        if (ans == 1)
        {
            marks++;
        }
        cout << "What is atomic number of Helium?" << endl;
        cin >> ans;
        if (ans == 2)
        {
            marks++;
        }
        cout << "What is atomic number of Lithium?" << endl;
        cin >> ans;
        if (ans == 3)
        {
            marks++;
        }
        cout << "What is atomic number of Berillium?" << endl;
        cin >> ans;
        if (ans == 4)
        {
            marks++;
        }
        cout << "What is atomic number of Boron?" << endl;
        cin >> ans;
        if (ans == 5)
        {
            marks++;
        }

        printf("%d %d\n", marks,attempts);

        if (attempts == 3 && marks!=5)
        {
            cout << "You have lost." << endl;
        }
        else
        {
            if (marks == 5)
            {
                cout << "You have won." << endl;
                return 0;
            }

        }
    }

    return 0;
}