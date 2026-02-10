class Solution {
    public int longestValidParentheses(String s) {
        int l=s.length();
        int maxlen=0;
        int[]dp=new int[l];
        for(int i=1;i<l;i++){
            if(s.charAt(i)==')'){
                if(i-1>0 && s.charAt(i-1)=='('){
                    dp[i]=2+(i-2>=0?dp[i-2] : 0);
                }
                else if((i-dp[i-1])>0 && s.charAt(i-dp[i-1]-1)=='('){
                    dp[i]=dp[i-1]+2;
                    if(i-dp[i-1] >=2){
                        dp[i]+=dp[i-dp[i-1]-2];
                    }

                }
            }
            maxlen=Math.max(maxlen,dp[i]);
        }
        return maxlen;
        
    }
}