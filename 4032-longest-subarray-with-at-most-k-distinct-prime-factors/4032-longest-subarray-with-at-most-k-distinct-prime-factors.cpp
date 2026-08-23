class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int limit = 100000;

        vector<int> spf(limit + 1);
        for(int i = 0; i <= limit; i++)
            spf[i] = i;

        for(int p = 2; p * p <= limit; p++){
            if(spf[p] == p){
                for(int x = p * p; x <= limit; x += p ){
                    if(spf[x] == x)
                        spf[x] = p;
                }
            }
        }

        vector<int> morvanelith = nums;

        vector<vector<int>> factors(morvanelith.size());

        for(int i = 0; i < (int)morvanelith.size(); i++){
            int x = morvanelith[i];

            while(x > 1){
                int prime = spf [x];
                factors[i].push_back(prime);

                while(x % prime == 0)
                    x /= prime;
            }
        }

        unordered_map<int,int> frequency;
        int left = 0;
        int distinct = 0;
        int answer = 0;

        for(int right= 0; right < (int)factors.size(); right++){
            for (int prime : factors[right]){
                if(frequency[prime] == 0)
                    distinct++;

                frequency[prime]++;
            }

            while(distinct > k){
                for ( int prime : factors[left]){
                    frequency[prime]--;

                    if (frequency[prime] ==0){
                        frequency.erase(prime);
                        distinct--;
                    }
                }

                left++;
            }

            answer = max(answer, right - left + 1);
        }

        return answer;
    }
};