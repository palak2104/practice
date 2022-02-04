class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int flag=0;
        vector<int>vis(n+1,0);
        for(auto it:trust){
        vis[it[0]]++;
        }
        int res=-1;
        for(int i=1;i<=n;i++){
            if(vis[i]==0){
                res=i;
            }
        }
        if(res==-1) return -1;
       int count=0;
        for(auto it:trust){
        if(it[1]==res) count++;
        }
        cout<<count;
        if(count!=n-1) return -1;
        return res;
    }
};
