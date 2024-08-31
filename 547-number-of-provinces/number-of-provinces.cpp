class Solution {
public:
    void dfs(int i,vector<vector<int>>&c,vector<int>&vis)
    {
        vis[i]=1;
        for(auto x: c[i])
        {
            if(!vis[x])
                dfs(x,c,vis);
        }

    }

    int findCircleNum(vector<vector<int>>&isConnected) {
      
        int l= isConnected.size();
        vector<vector<int>>adj(l);
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<l;j++)
            {
                if(isConnected[i][j]== 1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
                
            }
        }
        vector<int>vis(l,0);
        int cnt=0;
        for(int i=0;i<l;i++)
        {
            if(!vis[i])
                {
                    cnt++;
                    dfs(i,adj,vis);
                }
        }
        return cnt;
       

        
    }
};