class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
      int low=0,sum=0,res=INT_MAX;

      for(int high=0;high<nums.size();high++){
        sum=sum+nums[high];

        while(sum>=target){
            int len=high-low+1;
            res=min(len,res);
            sum=sum-nums[low];
            low++;
        }
      }

      if(INT_MAX==res) return 0;
      return res;
    }
};