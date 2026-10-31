class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left=0, right=0, sum=0;

        for(int i=0;i<nums.size();i++){
            sum += nums[i];
        }

        for(int i=0;i<nums.size();i++){
           right = sum-nums[i]-left;
           if(right == left) return i;

           left  += nums[i];
        }

        return -1;
    }
};