#include <stdio.h>
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

class Solution {
public:
    bool is_integer(double k) {
        return k == (double)(int)k;
    }

public:
    bool isPowerOfTwo(int n) {
        if (n == 0){
            return false;
        }
        float result = log(n)/log(2);
        if (pow(2, result) == n) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution solution;
    solution.isPowerOfTwo(2097151);
}