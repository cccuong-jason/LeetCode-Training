
class Solution {

    public int majorityElement(int[] nums) {
        int vote = 0;
        int candidate = -1;
        for (int i = 0; i < nums.length; i++) {
            if (vote == 0) {
                candidate = nums[i];
                vote = 1;
            }
            else if (candidate == nums[i]) {
                vote++;
            }
            else {
                vote--;
            }
        }

        vote = 0;
        for (int index = 0; index < nums.length; index++) {
            if (nums[index] == candidate)
                vote++;
        }

        if (vote > (nums.length / 2))
            return candidate;
        return -1;
    }

    public int optimizedRemoveDuplicates(int[] nums) {
        return 0;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int[] nums = {1, 1, 1, 2, 2, 3, 4};
        int result = solution.majorityElement(nums);
        System.out.println(result);
    }
}
