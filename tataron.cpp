#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxNetWorth(int N, int X, int Y, vector<int>& prices) {
    sort(prices.begin(), prices.end());
    int netWorth = 0;
    int year = 0;

    for (int i = 0; i < N && year < Y; i++) {
        if (X >= prices[i]) {
            netWorth += prices[i] * (1 << (Y - year - 1)); // Property price doubles every year until retirement
            X -= prices[i];
            year++;
        } else {
            break;
        }
    }

    return netWorth;
}

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;
    vector<int> prices(N);
    for (int i = 0; i < N; i++) cin >> prices[i];
    cout << maxNetWorth(N, X, Y, prices);
    return 0;
}