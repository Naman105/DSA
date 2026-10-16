class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum=0,minSum=0,res=0;

        for(int i=0;i<nums.size();i++){
            maxSum=max(nums[i]+maxSum,nums[i]);
            minSum=(min(nums[i]+minSum,nums[i]));
            res=max(res,max(maxSum,abs(minSum)));
        }

        return res;
    }
};