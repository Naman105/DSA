class Solution {
public:
    bool isPalindromic(string s) {
        string bits;

        for (char ch : s) {
            int x = ch;

            for (int j = 0; j < 8; j++) {
                bits.push_back((x & (1 << (7 - j))) ? '1' : '0');
            }
        }

        for (int i = 0, j = bits.size() - 1; i < j; i++, j--) {
            if (bits[i] != bits[j])
                return false;
        }

        return true;
    }
};