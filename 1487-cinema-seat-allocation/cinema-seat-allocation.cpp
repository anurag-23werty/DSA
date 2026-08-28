class Solution {
public:
    int Possible(vector<int>&reserved,int l,int r){
        for(int i=l;i<=r;i++){
           if(reserved[i]) return 0; 
        }
        return 1;
    }
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        sort(reservedSeats.begin(),reservedSeats.end());
        vector<int>reserved(11,0);
        int l = 0;
        int r = 0;
        int prev = 0 ;
        int ans = 0;
        int m = reservedSeats.size();
        while(r<m){
            ans += 2*(reservedSeats[r][0]-prev-1);
            prev = reservedSeats[r][0];
            while(r<m && reservedSeats[r][0]==reservedSeats[l][0]){
                reserved[reservedSeats[r][1]] =1 ;
                r++;

            }
            int twotofive = Possible(reserved,2,5);
            int fourtoseven = Possible(reserved,4,7);
            int sixtonine = Possible(reserved,6,9);
            if(twotofive && sixtonine) ans+= 2;
            else if(twotofive || sixtonine || fourtoseven) ans+=1;
            l=r;
            fill(reserved.begin(),reserved.end(),0);
        }
        ans += 2*(n-prev);
        return ans;

        
    }
};