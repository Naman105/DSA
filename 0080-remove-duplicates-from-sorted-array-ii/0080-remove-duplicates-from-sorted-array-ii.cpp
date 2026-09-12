class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,res=1, count=1;

        while(j<nums.size()){
            if(nums[j] == nums[j-1]){
                count++;
                if(count<=2){
                    nums[i+1]=nums[j];
                    i++;
                    res++;
                }
            }
            else{
                    count=1;
                    nums[i+1]=nums[j];
                    i++;
                    res++;
                }
            j++;
        }

        return res;
    }
};