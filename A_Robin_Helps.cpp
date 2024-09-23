#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int totalTests;
    cin >> totalTests;
    while (totalTests--)
    {
        int numberOfPeople, minimumGoldRequired;
        cin >> numberOfPeople >> minimumGoldRequired;
        vector<int> goldAmounts(numberOfPeople);
        for (int i = 0; i < numberOfPeople; ++i)
        {
            cin >> goldAmounts[i];
        }

        int totalGold = 0;
        int helpedPeople = 0;

        for (int i = 0; i < numberOfPeople; ++i)
        {
            if (goldAmounts[i] >= minimumGoldRequired)
            {
                totalGold += goldAmounts[i];
            }
            else if (goldAmounts[i] == 0)
            {
                if (totalGold > 0)
                {
                    totalGold--;
                    helpedPeople++;
                }
            }
        }

        cout << helpedPeople << endl;
    }

    return 0;
}