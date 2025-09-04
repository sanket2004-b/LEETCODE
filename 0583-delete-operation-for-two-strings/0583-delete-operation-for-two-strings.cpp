class Solution {
public:
    int solve(int i,int j,string& a,string& b){
        if(i==a.size()){
            return 0;
        }
        if(j==b.size()){
            return 0;
        }
        int ans=0;
        if(a[i] == b[j]){
            return ans=1+solve(i+1,j+1,a,b);
        }else{
            ans=max(solve(i+1,j,a,b),solve(i,j+1,a,b));

        }
        return ans;
    }

    int solvememo(int i,int j,string& a,string& b,vector<vector<int>>& dp){
        if(i==a.size()){
            return 0;
        }
        if(j==b.size()){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int ans=0;
        if(a[i] == b[j]){
            return ans=1+solvememo(i+1,j+1,a,b,dp);
        }else{
            ans=max(solvememo(i+1,j,a,b,dp),solvememo(i,j+1,a,b,dp));

        }
        return dp[i][j]= ans;
    }

    int minDistance(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        int ans=solvememo(0,0,word1,word2,dp);

        return (n-ans)+(m-ans);
    }
};