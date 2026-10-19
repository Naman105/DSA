class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int Max=nums[0],res=nums[0],Min=nums[0],totalSum=nums[0],MinSum=nums[0];

        for(int i=1;i<nums.size();i++){
            totalSum += nums[i];
            Max=max(Max+nums[i],nums[i]);
            res=max(res,Max);
            Min=min(Min+nums[i],nums[i]);
            MinSum=min(Min,MinSum);
        }

        if(res<0) return res;
        
        return max(totalSum-MinSum,res);
    }
};