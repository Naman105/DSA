class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {  
     int low=0,res=INT_MIN;

     for(int high=0;high<nums.size();high++){
        if(nums[high]==0){
            low = high+1;
        }

        int len=high-low+1;
        res=max(res,len);
     }

    if(INT_MIN==res) return 0;
    return res;

    }
};