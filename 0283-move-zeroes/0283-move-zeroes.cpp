class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans,end;

        for(int i=0;i<nums.size();i++){
            if(nums[i] != 0){
                ans.push_back(nums[i]);
            }
            else{
                end.push_back(nums[i]);
            }

        }
        int i=0,j=0,index=0;

        while(i<ans.size()){
            nums[index]=ans[i];
            i++;
            index++;
        }

        while(j<end.size()){
            nums[index]=end[j];
            j++;
            index++;
        }
    }
};