#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    map<int, vector<int>> freq;
    for (int i = 0; i < n; i++) {
        freq[a[i]].push_back(i);
    }
    int t = 0;
    for (auto x : freq) {
        if(x.second.size()==1){
            t++;
        }else{
            bool is_arithmetic = true;
            int common_diff = 0;
            for (int i = 1; i < x.second.size(); i++) {
                if (i == 1) {
                    common_diff = x.second[i] - x.second[i - 1];
                } else {
                    if (x.second[i] - x.second[i - 1] != common_diff) {
                        is_arithmetic = false;
                        break;
                    }
                }
            }
            if (is_arithmetic) {
                t++;
            }
        }
    }
    cout << t << endl;
    for (auto x : freq) {
        if(x.second.size()==1){
            cout << x.first << " " << 0 << endl;
        }else{
            bool is_arithmetic = true;
            int common_diff = 0;
            for (int i = 1; i < x.second.size(); i++) {
                if (i == 1) {
                    common_diff = x.second[i] - x.second[i - 1];
                } else {
                    if (x.second[i] - x.second[i - 1] != common_diff) {
                        is_arithmetic = false;
                        break;
                    }
                }
            }
            if (is_arithmetic) {
                cout << x.first << " " << common_diff << endl;
            }
        }
    }
    return 0;
}
