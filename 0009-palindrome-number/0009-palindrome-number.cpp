class Solution {
public:
    bool isPalindrome(int x) {
        long rev=0;
        int original=x;
        if(x<0){
            return false;
        }
        
        while(x!=0){
            int ld;
            ld=x%10;
            rev=(rev*10)+ld;
            x=x/10;
        }
        return(original==rev);
      

        
    }
};