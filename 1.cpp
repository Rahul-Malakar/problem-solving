#include <iostream>
using namespace std;

long long factorial(long long n)
{
    long long result = 1;
    for (long long i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    cout<<"enter"<<endl;
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;

        cin >> n;
        cout << factorial(n) << endl;
        
    }
    return 0;
}
