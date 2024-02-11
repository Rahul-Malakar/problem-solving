#include <iostream>
using namespace std;

long long customPow(long long base, long long exponent)
{
    long long result = 1;
    while (exponent > 0)
    {
        if (exponent % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }
    return result;
}

long long countDivisibleBy3(int x)
{
    if (x % 2 == 0)
    {
        return (customPow(10, x / 2) - 1) / 3;
    }
    else
    {
        return (customPow(10, (x + 1) / 2) - 1) / 3;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        long long result = countDivisibleBy3(x);

        cout << result<<endl;
    }

    return 0;
}
