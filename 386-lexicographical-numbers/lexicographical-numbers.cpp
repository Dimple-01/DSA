class Solution {
public:
    void dfs(int currnode, int n, vector<int> &v){
        if(currnode > n) return;

        v.push_back( currnode);
        for(int i=0;i<=9;i++)
        {
            int newnum= currnode*10 + i;
            dfs( newnum, n, v);
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int>v;
        for(int i=1;i<=9;i++)
        {
            dfs(i, n,v);
        }
       return v; 
    }
};