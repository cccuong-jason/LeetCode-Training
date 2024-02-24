#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size = nums.size();
        int max_number = *max_element(nums.begin(), nums.end());

        if (max_number < size) {
            return size;
        }

        for (const int& num : nums) {
            int substract = max_number - num;
            if (find(nums.begin(), nums.end(), substract) == nums.end()) {
                return substract;
            } else {
                
            }
        }
    }
};

int main() {
    Solution solution;
    vector<int> nums = {0, 2, 3};
    int res = solution.missingNumber(nums);
    cout << "Result: " << res << endl;
}
