class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int l = 0 , r = nums.size()-1;
        vector<int> ans(nums.size());
        int index = nums.size() - 1;

        while(l <= r){
            if(abs(nums[l])>abs(nums[r]))
                ans[index--] = nums[l] * nums[l++];
            else
                ans[index--] = nums[r] *nums[r--];
        }
        return ans;

    }
};
