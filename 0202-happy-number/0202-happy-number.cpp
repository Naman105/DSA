class Solution {
public:
int getNext(int n) {
        int sum=0;
        while(n>0){
            int d=n%10;
            sum += d*d;
            n/=10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow=n,fast=n;

        while(fast!=1){
            slow=getNext(slow);
            fast=getNext(getNext(fast));

            if(slow==fast && slow!=1){
                return false;
            }

        }

        return true;

    }      
};