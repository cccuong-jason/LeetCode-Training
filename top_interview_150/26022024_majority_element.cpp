#include <stdio.h>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
    	int n = nums.size();
    	int limit = n / 2;
    	map<int, int> count_map;

       	for(int i = 0; i < n; i++) {
       		count_map[nums[i]]++;
       		if (count_map[nums[i]] > limit) {
       			return nums[i];
			}
       	}
    }
};

int main(){
	vector<int> nums = {3, 2 ,3};
	Solution solution;
	int result = solution.majorityElement(nums);
	cout << "Result: " << result << endl;
}