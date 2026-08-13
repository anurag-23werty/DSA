class Solution {
public:
    struct cmp{
        bool operator()(const pair<int,char>&a,const pair<int,char>&b){
            if(a.first!=b.first){
                return a.first<b.first;
            }
            else{
                return a.second>b.second;
            }
        }
    };
    string reorganizeString(string s) {
        unordered_map<char,int>mp;
        for(char c:s){
            mp[c]++;
        }
        priority_queue<pair<int,char>,vector<pair<int,char>>,cmp>pq;
        for(auto it:mp) pq.push({it.second,it.first});
        string res;
        while(!pq.empty()){
            auto curr = pq.top();
            pq.pop();
            if(res.empty() || res.back()!= curr.second){
                res.push_back(curr.second);
                curr.first--;
                if(curr.first>0) pq.push(curr);
            }
            else{
                if(pq.empty()){
                    return "";
                }
                auto curr2 = pq.top();
                pq.pop();
                res.push_back(curr2.second);
                curr2.first--;
                if(curr2.first>0) pq.push(curr2);

                pq.push(curr);
                            
                            
                            
            }
        }
        return res;
    }
};