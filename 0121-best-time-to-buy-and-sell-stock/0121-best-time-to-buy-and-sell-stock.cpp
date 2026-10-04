class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int i=0,j=1,res=0;

         while(j<prices.size()){
            if(prices[j]<prices[i]){
                i=j;
            }
            else{
                int profit=prices[j]-prices[i];
                res=max(res,profit);
            }
            j++;
         }

         return res;

    }
};