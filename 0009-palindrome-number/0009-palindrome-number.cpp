class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;

        long long rev=0;
        int dup=x;

        while (dup>0){
            rev=rev*10 + dup%10;
            dup=dup/10;
        }

        return rev == x;
  }
};