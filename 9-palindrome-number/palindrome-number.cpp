class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10==0&&x!=0)){
            return false;
        }
        int rn=0;

        while(x>rn){
            int digit=x%10;
            rn=rn*10+digit;
            x/=10;
        }
        return(x==rn||x==rn/10);
    }
};