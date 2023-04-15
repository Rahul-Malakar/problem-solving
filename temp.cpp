#include <iostream>
#include <string>

using namespace std;

char findNthLetter(long long N) {
    long long totalChars = 26;  
    long long i = 1;
    while (N > totalChars) {
        N -= totalChars;
        totalChars *= 26;  
        i++;
    }
   
    int letterIndex = (N - 1) / i;  
    char nthLetter = 'A' + letterIndex;
    return nthLetter;
}

int main() {
    long long N = 1000000000000000000;  
    char nthLetter = findNthLetter(N);
    cout << "The N-th printed letter is: " << nthLetter << endl;
    return 0;
}
