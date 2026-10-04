class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>ans;
        k= k %nums.size();

        int low=nums.size()-k,high=nums.size()-1;

        for(int i=low;i<=high;i++){
            ans.push_back(nums[i]);
        }
         
        for(int i=0;i<low;i++){
            ans.push_back(nums[i]);
        } 

        nums=ans;
    }
};