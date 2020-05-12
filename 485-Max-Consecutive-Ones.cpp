class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones = 0;
        int cur_max = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i]==0) cur_max = 0;
            else {
                cur_max +=1;
                if(cur_max > max_ones) max_ones = cur_max;
            }
        }
        return max_ones;
    }
};