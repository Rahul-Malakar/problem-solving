#include <iostream>
#include <string>
#include <vector>
using namespace std;

void generateSubsequences(const std::string& s, int m, int index, std::string& current, std::vector<std::string>& subsequences) {
    if (current.length() == m) {
        subsequences.push_back(current);
        return;
    }

    if (index >= s.length()) {
        return;
    }

    current.push_back(s[index]);
    generateSubsequences(s, m, index + 1, current, subsequences);
    current.pop_back();

    generateSubsequences(s, m, index + 1, current, subsequences);
}

std::vector<std::string> getSubsequences(const std::string& s, int m) {
    std::vector<std::string> subsequences;
    std::string current;
    generateSubsequences(s, m, 0, current, subsequences);
    return subsequences;
}

int main() {
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int m; cin>>m;
        string l,r; cin>>l>>r;
        vector<string> subsequences = getSubsequences(s, m);
    }

    

    return 0;
}
