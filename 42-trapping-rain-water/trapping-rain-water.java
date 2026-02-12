class Solution {
    public int max(int a,int b){
        if(a>=b) return a;
        else return b;
    }
    public int min(int a,int b ){
        if(a<=b) return a;
        else return b;
    }
    public int trap(int[] height) {
        int[] prefix= new int[height.length];
        int[] suffix=new int[height.length];
        int res=0;
        prefix[0]=height[0];
        suffix[height.length-1]=height[height.length-1];
        for(int i=1;i<height.length;i++){
            prefix[i]=max(prefix[i-1],height[i]);
        }
        for(int i=height.length-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],height[i]);
        }
        for(int i=0;i<height.length;i++){
            res+=min(prefix[i],suffix[i])-height[i];
        }
        return res;

        
    }
}