class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>neg,pos;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0){
                pos.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }

        if(neg.empty()){
            for(int i=0;i<pos.size();i++){
                pos[i]=pos[i]*pos[i];
            }
            return pos;
        }

        if(pos.empty()){
            for(int i=0;i<neg.size();i++){
                neg[i]=neg[i]*neg[i];
            }
            reverse(neg.begin(),neg.end());
            return neg;
        }

        for(int i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
        }

        for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
        }
        
        reverse(neg.begin(),neg.end());

        int a=0,b=0;
        vector<int>res;

        while(a<neg.size() && b<pos.size()){
            if(neg[a]<pos[b]){
                res.push_back(neg[a]);
                a++;
            }
            else{
                res.push_back(pos[b]);
                b++;
            }
        }

        while(b<pos.size()){
            res.push_back(pos[b]);
            b++;
        }

        while(a<neg.size()){
            res.push_back(neg[a]);
            a++;
        } 

        return res;

    }
};