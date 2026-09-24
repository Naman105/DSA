class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int low=0,res=INT_MIN,zeroCount=0,len;

        for(int high=0;high<nums.size();high++){
            if(nums[high]==0){
                zeroCount++;
            }
            while(zeroCount>k){
                if(nums[low]==0){
                    zeroCount--;
                }
                low++;
            }

            len=high-low+1;
            res=max(len,res);
        }

        return res; 

    }
};