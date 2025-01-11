#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    	// Merge
    	int final_size = m + n;
    	for(int i = 0; i < final_size; i++) {
    		if (i == m) {
    			for (int j = 0; j < n; j++) {
	    			nums1[m + j] = nums2[j];
    			}
    		} 
    	}

    	int min = 0;
    	// Sort
    	for (int i = 0; i < final_size; i++) {
    		for (int j = i + 1; j <= final_size - 1; j++) {
    			int temp;
    			if (nums1[i] > nums1[j]) {
    				min = nums1[j];
    				temp = nums1[i];
    				nums1[i] = nums1[j];
    				nums1[j]= temp;
    			} else {
    				min = nums1[i];
    			}
    		}
    	}
    }
};

int main() {
	int m = 1;
	int n = 1;

	vector<int> items1 = {2, 0};
	vector<int> items2 = {1};

	Solution solution;
	solution.merge(items1, m, items2, n);
}