class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
         long long low=0,high=k-1,res=0,sum=0;

         for(int i=low;i<=high;i++){
            sum += nums[i];
            mp[nums[i]]++;
        }

        while(high<nums.size()){
            if(mp.size()==k){
                res=max(res,sum);
            }
            low++;
            high++;
            if(high==nums.size())
                  break;
            sum=sum-nums[low-1];
            sum=sum+nums[high];
            mp[nums[low-1]]--;
            mp[nums[high]]++;
            if(mp[nums[low-1]]==0)
               mp.erase(nums[low-1]);
        }

          return res;
        }
};