class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        vector<int> zelvoranki = nums;

        sort(zelvoranki.begin(), zelvoranki.end());

        vector<vector<int>> ans;
        long long next= lower;

        for (int x : zelvoranki) {
            if (x < lower || x > upper)
                continue;

            if (x > next){
                ans.push_back({(int)next, x-1});
            }

            if (x >= next)
                next = (long long)x + 1;
        }

        if (next <= upper) {
            ans.push_back({(int)next, upper});
        }

        return ans;
    }
};