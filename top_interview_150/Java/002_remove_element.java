package top_interview_150.Java;

import java.util.Arrays;

class Solution {

    public int removeElement(int[] nums, int val) {
        int k = 0;  // k will be the index for next valid element

        // Simply iterate through array once
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {4, 5};
        int val = 4;

        int result = solution.removeElement(nums, val);

        System.out.println(result);
        System.out.println(Arrays.toString(nums));
    }
}
