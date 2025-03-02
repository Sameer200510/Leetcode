class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int ele_sum = 0, dig_sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            ele_sum += nums[i];
            while (nums[i] > 0) {
                dig_sum += nums[i] % 10;
                nums[i] /= 10;
            }
        }
        return abs(dig_sum - ele_sum);
    }
};