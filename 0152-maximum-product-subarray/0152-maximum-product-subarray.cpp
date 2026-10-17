class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxEnd=nums[0],minEnd=nums[0],ans=nums[0];

        for(int i=1;i<nums.size();i++){
            int oldMax=maxEnd;
            int oldMin=minEnd;

            maxEnd=max(nums[i],max(maxEnd*nums[i],minEnd*nums[i]));
            minEnd=min(nums[i],min(oldMax*nums[i],minEnd*nums[i]));
            ans=max(ans,maxEnd);
        }

        return ans;
    }
};