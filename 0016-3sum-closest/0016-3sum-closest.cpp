class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int maxdiff=INT_MAX,res,sum,diff;

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;i++){
            int j=i+1,k=nums.size()-1;

            while(j<k){
                sum=nums[i]+nums[j]+nums[k];

                  diff = abs(sum-target);

                  if(diff<maxdiff){
                    maxdiff=diff;
                    res=sum;
                  }

                  if(sum<target){
                    j++;
                  }
                  else if(sum>target){
                    k--;
                  }
                  else{
                    return sum;
                  }
                    
                }
            }

        return res;
        
    }
};