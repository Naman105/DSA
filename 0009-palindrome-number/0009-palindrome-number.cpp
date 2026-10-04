class Solution {
public:
    bool isPalindrome(int x) {
        int y,rev=0,dup=x;

        if(x<0) return false;

       while(x>0){
        y= x % 10;
        if(rev > INT_MAX/10) return 0;
        rev = rev*10 + y;
        x /= 10;
       }

       if(rev == dup) return true;
       else return false;

  }
};