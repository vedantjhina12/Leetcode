class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        int lastdigit;
        int reversed=0;
        if(x<0){
            return false;
        }
        while(x!=0){
            lastdigit=x%10;
            if(reversed>INT_MAX/10||reversed<INT_MIN/10){
                return false;
            }
            reversed=reversed*10+lastdigit;
            x=x/10;
        }
        if(reversed==original){
            return true;
        }else{
            return false;

        }
        
        
    }
};