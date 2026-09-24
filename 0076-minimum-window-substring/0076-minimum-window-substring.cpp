class Solution {
public:
bool contains(int Sfreq[],int Tfreq[]){
            for(int i=0;i<256;i++){
                if(Sfreq[i]<Tfreq[i]){
                    return false;
                }
            }
            return true;
        }

    string minWindow(string s, string t) {
        int Sfreq[256]={0},Tfreq[256]={0}; 
        int low=0,res=INT_MAX,start;

        for(int high=0;high<t.size();high++){
            Tfreq[t[high]]++;
        }

        for(int high=0;high<s.size();high++){
            Sfreq[s[high]]++;

            while(contains(Sfreq,Tfreq)){
                int len=high-low+1;
                if(res>len){
                    res=len;
                    start=low;
                }
                Sfreq[s[low]]--;
                low++;
            }
        }
        
        if(res == INT_MAX)return "";
        return s.substr(start,res);
    }
};