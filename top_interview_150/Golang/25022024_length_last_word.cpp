#include <stdio.h>
#include <iostream>
#include <vector>
#include <cctype>
#include <cstring>
using namespace std;

class Solution {
public:
    int lengthOfLastWord(const std::string& s) {
        int length = static_cast<int>(s.length());
        int lastWordLength = 0;

        // Skip trailing spaces
        int i = length - 1;
        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        // Calculate length of last word
        while (i >= 0 && s[i] != ' ') {
            lastWordLength++;
            i--;
        }

        return lastWordLength;
    }
};

int main() {
	string s = "a";

	Solution solution;
	int result = solution.lengthOfLastWord(s);
	cout << "Result: " << result << endl;
}