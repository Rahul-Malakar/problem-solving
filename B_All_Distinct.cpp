#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  long long int t;
  cin >> t;
  while (t--)
  {
 
    long long int n, count = 0;
    cin >> n;
    long long int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n);
    for (int i = 0; i < n - 1; i++)
    {
      if (a[i] == a[i + 1])
      {
        count++;
      }
    }
    if (count == 0)
    {
      cout << n << endl;
    }
    else if (count == 1)
    {
      cout << (n - 2) << endl;
    }
    else if (count % 2 == 0)
    {
      cout << (n - count) << endl;
    }
    else if (count % 2 != 0)
    {
      cout << (n - count - 1) << endl;
    }
  }
  return 0;
}