class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[256] = {0};
        int low=0,res=INT_MIN,maxFreq=0;

        for(int high=0;high<s.size();high++){
            freq[s[high]]++;
            int len=high-low+1;
            maxFreq=max(maxFreq,freq[s[high]]);
            int diff= len- maxFreq;

            while(diff>k){
                freq[s[low]]--;
                low++;
                len=high-low+1;
                maxFreq=max(maxFreq,freq[s[high]]);
                diff=len-maxFreq;
            }

            len=high-low+1;
            res=max(len,res);
        }
        return res;
    }
};