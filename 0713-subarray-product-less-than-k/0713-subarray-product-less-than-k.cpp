class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int low = 0,product = 1,res = 0;

        if(k<=1) return 0;

  for(int high = 0; high < nums.size(); high++) {

      product *= nums[high];

       while(product >= k && low<nums.size()) {
           product = product/nums[low];
           low++;
       }

      int len = high - low + 1;
      res = res+len;
}

    return res;
    }
};