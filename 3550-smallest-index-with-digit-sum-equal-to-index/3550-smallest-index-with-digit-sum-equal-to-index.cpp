class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int i=0,res=INT_MAX;

        while(i<nums.size()){
            int sum=0,num=nums[i];

        while(num>0){
            sum += num%10;
            num=num/10;
        }
        if(sum == i){
            res=min(res,sum);
            }
        i++;
    } 
       if(INT_MAX==res) return -1;
        return res;
    }
};