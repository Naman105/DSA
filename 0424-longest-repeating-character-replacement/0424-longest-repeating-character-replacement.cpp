class Solution {
public:
    int characterReplacement(string s, int k) {
        int freq[256] = {0};
        int low=0,res=INT_MIN;

        for(int high=0;high<s.size();high++){
            freq[s[high]]++;
            int len=high-low+1;
            int maxFreq=*max_element(freq,freq+256);
            int diff= len- maxFreq;

            while(diff>k){
                freq[s[low]]--;
                low++;
                len=high-low+1;
                maxFreq=*max_element(freq,freq+256);
                diff=len-maxFreq;
            }

            len=high-low+1;
            res=max(len,res);
        }
        return res;
    }
};