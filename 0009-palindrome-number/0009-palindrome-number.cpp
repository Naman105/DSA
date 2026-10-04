class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0;
        int dup=x;

        if(x<0) return false;

        while (dup>0){
            rev=rev*10 + dup%10;
            dup=dup/10;
        }

        return rev == x;
  }
};