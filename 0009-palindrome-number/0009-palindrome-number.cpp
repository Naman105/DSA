class Solution {
public:
    bool isPalindrome(int x) {
        long long rev=0,dup=x;

        if(x<0) return false;

       while(x>0){
        rev = rev*10 + x%10;
        x /= 10;
       }

       if(rev == dup) return true;
       else return false;

  }
};