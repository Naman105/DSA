class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int bestEnd=nums[0],ans=nums[0];

       for(int i=1;i<nums.size();i++){
        int n1=bestEnd+nums[i];
        int n2=nums[i];
        bestEnd=max(n1,n2);
        ans=max(ans,bestEnd);
       }

       return ans;
    }
};