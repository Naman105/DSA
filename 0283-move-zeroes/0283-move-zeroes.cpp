class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int index=0;

        for(int i=0;i<nums.size();++i){
            if(nums[i]!=0){
                if(i != index){
                    int temp=nums[index];
                    nums[index]=nums[i];
                    nums[i]=temp;
                }
                index++;
            }
        }
    }
};