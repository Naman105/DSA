class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int bestEnd=nums[0],ans=nums[0];

       for(int i=1;i<nums.size();i++){
        bestEnd=max(bestEnd+nums[i],nums[i]);
        ans=max(ans,bestEnd);
       }

       return ans;
    }
};