class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector <int> prefix(nums.size(),0);
        vector<int> suffix(nums.size(),0);

        for(int i=1;i<nums.size();i++){
            prefix[i]=nums[i-1]+prefix[i-1];
        }

        for(int i=nums.size()-2;i>=0;i--){
            suffix[i]=nums[i+1]+suffix[i+1];        
            
        }

        int i=0;

        while(i<nums.size()){
            if(prefix[i]==suffix[i]){
                return i;
            }
            else{
                i++;
            }
        }

        return -1;
    }
};